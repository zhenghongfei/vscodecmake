#include <iostream>
#include "TestOperationOverload.h"

using namespace std;

namespace basic
{
    TestOperationOverload::TestOperationOverload() : real(0.0), imag(0.0) {}

    TestOperationOverload::TestOperationOverload(double real, double imag) : real(real), imag(imag) {}

    //实现运算符重载
    TestOperationOverload TestOperationOverload::operator+(const TestOperationOverload &A) const
    {
        TestOperationOverload temp;
        temp.real = this->real + A.real;
        temp.imag = this->imag + A.imag;
        return temp;
    }

    void TestOperationOverload::Display() const
    {
        cout << real << " + " << imag << endl;
    }

    void TestOperationOverload::TestOverload()
    {
        TestOperationOverload c1(4.3, 5.8);
        TestOperationOverload c2(2.4, 3.7);
        TestOperationOverload c3;
        c3 = c1 + c2;
        c3.Display();
    }
} // namespace basic