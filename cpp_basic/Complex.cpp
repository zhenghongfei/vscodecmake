#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace basic
{
    void Complex::Print()
    {
        cout << "Hello Complex" << endl;
    }

    //重载+运算符
    Complex operator+(const Complex &c1, const Complex &c2)
    {
        Complex c;
        c.m_real = c1.m_real + c2.m_real;
        c.m_imag = c1.m_imag + c2.m_imag;
        return c;
    }
    //重载-运算符
    Complex operator-(const Complex &c1, const Complex &c2)
    {
        Complex c;
        c.m_real = c1.m_real - c2.m_real;
        c.m_imag = c1.m_imag - c2.m_imag;
        return c;
    }
    //重载*运算符  (a+bi) * (c+di) = (ac-bd) + (bc+ad)i
    Complex operator*(const Complex &c1, const Complex &c2)
    {
        Complex c;
        c.m_real = c1.m_real * c2.m_real - c1.m_imag * c2.m_imag;
        c.m_imag = c1.m_imag * c2.m_real + c1.m_real * c2.m_imag;
        return c;
    }
    //重载/运算符  (a+bi) / (c+di) = [(ac+bd) / (c²+d²)] + [(bc-ad) / (c²+d²)]i
    Complex operator/(const Complex &c1, const Complex &c2)
    {
        Complex c;
        c.m_real = (c1.m_real * c2.m_real + c1.m_imag * c2.m_imag) / (pow(c2.m_real, 2) + pow(c2.m_imag, 2));
        c.m_imag = (c1.m_imag * c2.m_real - c1.m_real * c2.m_imag) / (pow(c2.m_real, 2) + pow(c2.m_imag, 2));
        return c;
    }
    //重载==运算符
    bool operator==(const Complex &c1, const Complex &c2)
    {
        if (c1.m_real == c2.m_real && c1.m_imag == c2.m_imag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //重载!=运算符
    bool operator!=(const Complex &c1, const Complex &c2)
    {
        if (c1.m_real != c2.m_real || c1.m_imag != c2.m_imag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //重载+=运算符
    Complex &Complex::operator+=(const Complex &c)
    {
        this->m_real += c.m_real;
        this->m_imag += c.m_imag;
        return *this;
    }
    //重载-=运算符
    Complex &Complex::operator-=(const Complex &c)
    {
        this->m_real -= c.m_real;
        this->m_imag -= c.m_imag;
        return *this;
    }
    //重载*=运算符
    Complex &Complex::operator*=(const Complex &c)
    {
        this->m_real = this->m_real * c.m_real - this->m_imag * c.m_imag;
        this->m_imag = this->m_imag * c.m_real + this->m_real * c.m_imag;
        return *this;
    }
    //重载/=运算符
    Complex &Complex::operator/=(const Complex &c)
    {
        this->m_real = (this->m_real * c.m_real + this->m_imag * c.m_imag) / (pow(c.m_real, 2) + pow(c.m_imag, 2));
        this->m_imag = (this->m_imag * c.m_real - this->m_real * c.m_imag) / (pow(c.m_real, 2) + pow(c.m_imag, 2));
        return *this;
    }
} // namespace basic