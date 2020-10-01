#include "TestCppBasic.h"

namespace basic
{
    void TestCppBasic::Swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
} // namespace basic