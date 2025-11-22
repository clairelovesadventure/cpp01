#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string str, const std::string& s1, const std::string& s2) {
	if (s1.empty())
		return str;
	
	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;
	
	while ((pos = str.find(s1, lastPos)) != std::string::npos) {
		result.append(str, lastPos, pos - lastPos);
		result.append(s2);
		lastPos = pos + s1.length();
	}
	result.append(str, lastPos, str.length() - lastPos);
	
	return result;
}

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return 1;
	}

	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open file " << filename << std::endl;
		return 1;
	}

	std::string outFilename = filename + ".replace";
	std::ofstream outfile(outFilename.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: could not create file " << outFilename << std::endl;
		infile.close();
		return 1;
	}

	std::string line;
	while (std::getline(infile, line)) {
		outfile << replaceAll(line, s1, s2);
		if (!infile.eof())
			outfile << std::endl;
	}

	infile.close();
	outfile.close();

	return 0;
}

