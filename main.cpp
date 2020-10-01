#include "TestCppBasic.h"

using namespace basic;

int main()
{
    TestCppBasic *cppBasic = new TestCppBasic();
    cppBasic->TestSwap();
    cppBasic->TestVariableInit();
    delete cppBasic;
    return 0;
}
