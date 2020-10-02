#include "TestFeatureSupports.h"
#include <iostream>
#include <assert.h>

using namespace std;

namespace basic
{
    void TestFeatureSupports()
    {
        assert((SMAX - 1) == (C99 | ExtInt | SAssert | NoExcept));

        Compiler a = {"abc", (C99 | SAssert)};
        if (a.spp & C99)
        {
            cout << "Compiler is support C99" << endl;
        }

        if (a.spp & SAssert)
        {
            cout << "Compiler is support SAssert" << endl;
        }

        if (a.spp & ExtInt)
        {
            cout << "Compiler is support ExtInt" << endl;
        }
    }
} // namespace basic