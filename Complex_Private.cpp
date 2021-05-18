#include "Complex_Private.h"

Complex_Private::Complex_Private()
	: Complex()
{}

Complex_Private::Complex_Private(int x, int y)
	: Complex(x, y)
{}

Complex_Private::Complex_Private(const Complex_Private& v)
	: Complex(v)
{}

Complex_Private& Complex_Private::operator = (const Complex_Private& n)
{
	Complex::operator = (n);
	return *this;
}

Complex_Private::operator string () const
{
	stringstream ss;
	ss << GetRe() << " + i * " << GetIm() << endl;
	return ss.str();
}

Complex_Private& Complex_Private::operator --()
{
	this->SetRe(this->GetRe() - 1);
	return *this;
}

Complex_Private& Complex_Private::operator ++()
{
	this->SetRe(this->GetRe() + 1);
	return *this;
}

Complex_Private Complex_Private::operator --(int)
{
	Complex_Private a(*this);
	this->SetIm(this->GetIm() - 1);
	return a;
}

Complex_Private Complex_Private::operator ++(int)
{
	Complex_Private a(*this);
	this->SetIm(this->GetIm() + 1);
	return a;
}

Complex_Private operator + (const Complex_Private Z1, const Complex_Private Z2)
{
	Complex_Private tmp(0, 0);
	tmp.SetRe(Z1.GetRe() + Z2.GetRe());
	tmp.SetIm(Z1.GetIm() + Z2.GetIm());
	return tmp;
}

Complex_Private operator * (const Complex_Private Z1, const Complex_Private Z2)
{
	Complex_Private tmp(0, 0);
	tmp.SetRe(Z1.GetRe() * Z2.GetRe() - Z1.GetIm() * Z2.GetIm());
	tmp.SetIm(Z1.GetRe() * Z2.GetIm() + Z2.GetRe() * Z1.GetIm());
	return tmp;
}

bool operator == (const Complex_Private Z1, const Complex_Private Z2)
{
	return Z1.GetRe() == Z2.GetRe() && Z1.GetIm() == Z2.GetIm();
}

ostream& operator <<(ostream& out, const Complex_Private& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, Complex_Private& a)
{
	int x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	a.SetRe(x); a.SetIm(y);
	return in;
}