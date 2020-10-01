#include <iostream>
#include "TestCppBasic.h"

using namespace std;

namespace basic
{
    void TestCppBasic::Swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void TestCppBasic::TestSwap()
    {
        int a = 10, b = 20;

        cout << "Before Swap" << endl;
        cout << "a = " << a << ", b = " << b << endl;

        Swap(a, b);

        cout << "After Swap" << endl;
        cout << "a = " << a << ", b = " << b << endl;
    }

    struct VarStruct
    {
        int a;
        int b;
        void Print()
        {
            cout << "VarStruct:a=" << a << ",b=" << b << endl;
        }
    } varStruct1{}, varStruct2{10, 20}, varStruct3{11, 21};

    void TestCppBasic::TestVariableInit()
    {
        int a = 3;
        int b(4);
        int c = a + b;

        cout << "TestVariableInit:a=" << a << ",b=" << b << ",c=" << c << endl;

        //c++98
        int d = {10};
        cout << "TestVariableInit in c++98:d=" << d << endl;

        //c++11
        int aa{11};
        int bb = {12};
        int cc{};    // cc = 0
        int dd = {}; // dd = 0

        cout << "TestVariableInit in c++11:aa=" << aa;
        cout << ",bb=" << bb << ",cc=" << cc << ",dd=" << dd << endl;

        VarStruct varStruct4{12, 22};
        VarStruct varStruct5{0};

        varStruct1.Print();
        varStruct2.Print();
        varStruct3.Print();
        varStruct4.Print();
        varStruct5.Print();

        int arr1[]{10, 20};
        int arr2[] = {11, 21};
        int arr3[]{};
        int arr4[] = {};
        int arr5[] = {0};
    }
} // namespace basic