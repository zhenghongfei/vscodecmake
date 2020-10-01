#include <iostream>
#include "swap/swap.h"

int main()
{
    int a = 10, b = 20;

    std::cout << "Before swap" << std::endl;
    std::cout << "a=" << a << " ,b=" << b << std::endl;

    swap(a, b);

    std::cout << "After swap" << std::endl;
    std::cout << "a=" << a << " ,b=" << b << std::endl;
    return 0;
}