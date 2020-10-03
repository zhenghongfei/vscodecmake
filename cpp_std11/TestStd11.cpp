#include "TestStd11.h"
#include <iostream>

using namespace std;

namespace std11
{
    void TestNoExpect::Throw()
    {
        throw 1;
    }

    void TestNoExpect::NotBlockThrow()
    {
        Throw();
    }

    void TestNoExpect::BlockThrow() noexcept
    {
        Throw();
    }

    void TestNoExpect::TestNoExpectForThrow()
    {
        TestNoExpect testNoExpect;

        try
        {
            testNoExpect.Throw();
        }
        catch (...)
        {
            cout << "Found throw." << endl;
        }

        try
        {
            testNoExpect.NotBlockThrow();
        }
        catch (...)
        {
            cout << "Throw is not blocked." << endl;
        }

        try
        {
            // 打开后程序退出，后续用例无法执行
            // testNoExpect.BlockThrow();
        }
        catch (...)
        {
            cout << "Found throw 1." << endl;
        }
    }

    // TestAuto.class

    template <typename T, typename U>
    void TestAuto::Mutiply1(T &t, U &u)
    {
        auto result = t * u;
        cout << "TestAuto::Mutiply1:" << result << endl;
    }

    template <class T, class U>
    auto TestAuto::Mutiply2(T &t, U &u)
    {
        return t * u;
    }

    void TestAuto::TestAutoUsed()
    {
        int a = 10;
        int b = 5;
        Mutiply1(a, b);

        double c = 10.5;
        double d = 5.5;
        cout << "TestAuto::Mutiply2:" << Mutiply2(c, d) << endl;
    }
} // namespace std11