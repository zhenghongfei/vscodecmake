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
            testNoExpect.BlockThrow();
        }
        catch (...)
        {
            cout << "Found throw 1." << endl;
        }
    }
} // namespace std11