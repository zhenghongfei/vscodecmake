#include <iostream>
#include "TestCppBasic.h"

void TestCppBasicSwap()
{
    int a = 10, b = 20;

    std::cout << "Before Swap" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    basic::TestCppBasic cppBasic;
    cppBasic.Swap(a, b);

    std::cout << "After Swap" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

int main()
{
    TestCppBasicSwap();
    return 0;
}