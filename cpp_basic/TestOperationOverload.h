namespace basic
{
    class TestOperationOverload
    {
    public:
        TestOperationOverload();
        TestOperationOverload(double real, double imag);
        //声明运算符重载
        TestOperationOverload operator+(const TestOperationOverload &A) const;
        void TestOverload();

    private:
        void Display() const;
        double real; //实部
        double imag; //虚部
    };
} // namespace basic