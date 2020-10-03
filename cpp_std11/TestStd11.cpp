#include "TestStd11.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

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

    void hello(const char *name)
    {
        // sleep 500毫秒
        std::this_thread::sleep_for(milliseconds(500));

        std::cout << "Hello " << name << std::endl;

        // sleep 到指定时间点
        std::this_thread::sleep_until(system_clock::now() + milliseconds(500));
    }

    void TestThread::TestThreadRun()
    {
        std::thread thread(hello, "C++11 Thread Test");
        thread.join();
    }
} // namespace std11