#include <iostream>

int& getElement(int index, int arr[]) {
    return arr[index]; // 返回数组元素的引用
}

int main() {
    int myArray[] = {1, 2, 3};
    getElement(1, myArray) = 99; // 直接通过函数调用修改了 myArray[1]
    std::cout << myArray[1] << std::endl; // 输出 99,因为函数返回的是引用，所以可以直接修改原数组
    return 0;
}