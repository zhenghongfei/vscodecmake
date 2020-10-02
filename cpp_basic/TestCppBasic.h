#include <string>

namespace basic
{
    struct C
    {
        C(int i) : c(i){};
        int c;
    };

    struct Init
    {
        int a = 1;
        // string b1("hello"); 无法通过编译
        std::string b2 = {"hello"};
        // C c1(1); 无法通过编译
        C c2 = {1};
    };

    class TestCppBasic
    {
    private:
        int a;
        int b = 1;
        static const int c = 0;
        static constexpr double d = 1.3;
        const int e = 10;

    private:
        void Swap(int &a, int &b);

    public:
        void TestVariableInit();
        void TestSwap();
        void PrintVariableInit();
    };
} // namespace basic