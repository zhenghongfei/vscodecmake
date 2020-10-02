#include "TestCppBasic.h"
#include "TestOperationOverload.h"
#include "Complex.h"
#include "TestStd11.h"
#include <iostream>

void TestCppBasicProject()
{
    using namespace basic;

    TestCppBasic *cppBasic = new TestCppBasic();
    cppBasic->TestSwap();
    cppBasic->TestVariableInit();
    delete cppBasic;

    TestOperationOverload *overload = new TestOperationOverload();
    overload->TestOverload();
    delete overload;

    Complex complex;
    complex.Print();
}

void TestCppStd11Project()
{
    using namespace std11;
    Print();
}

int main()
{
    TestCppBasicProject();
    TestCppStd11Project();
    return 0;
}
