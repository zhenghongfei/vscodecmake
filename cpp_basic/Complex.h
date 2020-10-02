namespace basic
{
    class Complex
    {
    public: //构造函数
        Complex(double real = 0.0, double imag = 0.0) : m_real(real), m_imag(imag) {}

    public: //运算符重载
        //以全局函数的形式重载
        friend Complex operator+(const Complex &c1, const Complex &c2);
        friend Complex operator-(const Complex &c1, const Complex &c2);
        friend Complex operator*(const Complex &c1, const Complex &c2);
        friend Complex operator/(const Complex &c1, const Complex &c2);
        friend bool operator==(const Complex &c1, const Complex &c2);
        friend bool operator!=(const Complex &c1, const Complex &c2);
        //以成员函数的形式重载
        Complex &operator+=(const Complex &c);
        Complex &operator-=(const Complex &c);
        Complex &operator*=(const Complex &c);
        Complex &operator/=(const Complex &c);

    public: //成员函数
        double real() const { return m_real; }
        double imag() const { return m_imag; }
        void Print();

    private:
        double m_real; //实部
        double m_imag; //虚部
    };
} // namespace basic