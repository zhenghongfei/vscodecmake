#include "TestCppBasic.h"
#include "TestOperationOverload.h"
#include "TestFeatureSupports.h"
#include "Complex.h"
#include "TestStd11.h"
#include <iostream>

using namespace std;

void TestCppBasicProject()
{
    cout << "Test Cpp Basic Project Start.." << endl;

    using namespace basic;

    TestCppBasic *cppBasic = new TestCppBasic();
    cppBasic->TestSwap();
    cppBasic->TestVariableInit();
    cppBasic->PrintVariableInit();
    delete cppBasic;

    cout << "Test TestCppBasic End.." << endl;

    TestOperationOverload *overload = new TestOperationOverload();
    overload->TestOverload();
    delete overload;

    cout << "Test TestOperationOverload End.." << endl;

    Complex complex;
    complex.Print();

    cout << "Test Complex End.." << endl;

    TestFeatureSupports();

    cout << "Test TestFeatureSupports For Enum End.." << endl;

    cout << "Test Cpp Basic Project End.." << endl;
}

void TestCppStd11Project()
{
    cout << "Test Cpp C++11 Project Start.." << endl;

    using namespace std11;

    TestNoExpect testNoExpect;
    testNoExpect.TestNoExpectForThrow();

    cout << "Test TestNoExpect End.." << endl;

    TestAuto *testAuto = new TestAuto();
    testAuto->TestAutoUsed();

    cout << "Test TestAuto End.." << endl;

    cout << "Test Cpp C++11 Project End.." << endl;
}

int main()
{
    TestCppBasicProject();
    TestCppStd11Project();
    return 0;
}
