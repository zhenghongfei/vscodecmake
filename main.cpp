#include "TestCppBasic.h"
#include "TestOperationOverload.h"
#include <iostream>

int main()
{
    using namespace basic;

    TestCppBasic *cppBasic = new TestCppBasic();
    cppBasic->TestSwap();
    cppBasic->TestVariableInit();
    delete cppBasic;

    TestOperationOverload *overload = new TestOperationOverload();
    overload->TestOverload();
    delete overload;

    return 0;
}
