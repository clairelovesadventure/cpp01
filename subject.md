C++ - Module 01
Memory allocation, pointers to members, references and switch statements
Version: 11.0

Contents
I Introduction

II General rules

III AI Instructions

IV Exercise 00: BraiiiiiiinnnzzzZ

V Exercise 01: Moar brainz!

VI Exercise 02: HI THIS IS BRAIN

VII Exercise 03: Unnecessary violence

VIII Exercise 04: Sed is for losers

IX Exercise 05: Harl 2.0

X Exercise 06: Harl filter

XI Submission and peer-evaluation

Chapter I Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (Wikipedia).

The goal of these modules is to introduce you to Object-Oriented Programming. This will be the starting point of your C++ journey.
These exercises require your code to comply with the C++98 standard.

Chapter II General rules
Compiling
Compile your code with: c++ -Wall -Wextra -Werror

Code should compile with: -std=c++98

Formatting and Naming Conventions
Exercise directories: ex00, ex01, ..., exn

Class names: UpperCamelCase (e.g. BrickWall.hpp)

All output messages must end with a newline.

No strict coding style, but clean, readable code is encouraged.

Allowed/Forbidden
Use almost everything from the standard library.

Forbidden: C++11 (or later) features, Boost, *printf(), *alloc(), free()

Forbidden: using namespace <ns_name>, friend keyword

STL allowed only in Modules 08 and 09.

Design Requirements
Avoid memory leaks when using new.

Classes (Module 02 - 09) must be in Orthodox Canonical Form.

Do NOT put function implementations in header files (except templates).

Use include guards.

Additional Notes
You may add extra files to split code as needed.

Always read the entire module before starting.

Chapter III AI Instructions
Main message:
Build strong foundations without shortcuts.

Really develop tech & power skills.

Experience peer-learning.

Learn about risks with AI.

Learner rules:

Use reasoning before AI.

Do NOT ask AI for direct answers (especially for assignments).

Learn 42's approach to AI.

Examples:

Good: Discuss concepts with peers for deeper understanding.

Bad: Secretly copy code from AI and fail to explain it.

Chapter IV Exercise 00: BraiiiiiiinnnzzzZ
Turn-in directory: ex00/
Files to turn in:
Makefile, main.cpp, Zombie.{h,hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp

Goal:

Implement a Zombie class, with a private string attribute name.

Add member function void announce(void).

Implement two functions:

Zombie* newZombie(std::string name);

void randomChump(std::string name);

Zombies should be destroyed when not needed; destructor prints message.

Chapter V Exercise 01: Moar brainz!
Turn-in directory: ex01/
Files to turn in:
Makefile, main.cpp, Zombie.{h,hpp}, Zombie.cpp, zombieHorde.cpp

Goal:

Implement Zombie* zombieHorde(int N, std::string name);

Allocates N Zombie objects, assigns names, returns pointer to first.

Announce all zombies, ensure deletion and check for memory leaks.

Chapter VI Exercise 02: HI THIS IS BRAIN
Turn-in directory: ex02/
Files to turn in:
Makefile, main.cpp

Program must contain:

A string variable initialized to "HI THIS IS BRAIN".

stringPTR: pointer to the string.

stringREF: reference to the string.

Print memory addresses and values for each.

Chapter VII Exercise 03: Unnecessary violence
Turn-in directory: ex03/
Files to turn in:
Makefile, main.cpp, Weapon.{h,hpp}, Weapon.cpp, HumanA.{h,hpp}, HumanA.cpp, HumanB.{h,hpp}, HumanB.cpp

Instructions:

Implement Weapon class with private attribute type (string).

Add getType() and setType() functions.

Create HumanA and HumanB classes, both with names and weapons, both with attack() functions.

HumanA always has a weapon when constructed; HumanB may not.

Test reference and pointer usage for Weapon.

Chapter VIII Exercise 04: Sed is for losers
Turn-in directory: ex04/
Files to turn in:
Makefile, main.cpp, *.cpp, *.{h,hpp}

Instructions:

Create program that takes: filename, s1, s2.

Read <filename>, copy to <filename>.replace with all occurrences of s1 replaced with s2.

No C file functions; can use all std::string except replace.

Chapter IX Exercise 05: Harl 2.0
Turn-in directory: ex05/
Files to turn in:
Makefile, main.cpp, Harl.{h,hpp}, Harl.cpp

Instructions:

Create Harl class with four private functions: debug(), info(), warning(), error().

Public complain(std::string level) function calls appropriate function using pointers to member functions (not if/else).

Chapter X Exercise 06: Harl filter
Turn-in directory: ex06/
Files to turn in:
Makefile, main.cpp, Harl.{h,hpp}, Harl.cpp

Instructions:

Implement harlFilter that takes one of four levels, prints all messages from that level up.

Use switch statement.

Chapter XI Submission and peer-evaluation
Submit via Git repository.

Defense may involve quick modifications.

Must be prepared for all requirements in evaluation.