#include "Complex_Public.h"

Complex_Public::Complex_Public()
	: Complex()
{}

Complex_Public::Complex_Public(int x, int y)
	: Complex(x, y)
{}

Complex_Public::Complex_Public(const Complex_Public& v)
	: Complex(v)
{}

Complex_Public& Complex_Public::operator = (const Complex_Public& n)
{
	Complex::operator = (n);
	return *this;
}

Complex_Public& Complex_Public::operator --()
{
	this->SetRe(this->GetRe() - 1);
	return *this;
}

Complex_Public& Complex_Public::operator ++()
{
	this->SetRe(this->GetRe() + 1);
	return *this;
}

Complex_Public Complex_Public::operator --(int)
{
	Complex_Public a(*this);
	this->SetIm(this->GetIm() - 1);
	return a;
}

Complex_Public Complex_Public::operator ++(int)
{
	Complex_Public a(*this);
	this->SetIm(this->GetIm() + 1);
	return a;
}

Complex_Public operator + (const Complex_Public Z1, const Complex_Public Z2)
{
	Complex_Public tmp(0, 0);
	tmp.SetRe(Z1.GetRe() + Z2.GetRe());
	tmp.SetIm(Z1.GetIm() + Z2.GetIm());
	return tmp;
}

Complex_Public operator * (const Complex_Public Z1, const Complex_Public Z2)
{
	Complex_Public tmp(0, 0);
	tmp.SetRe(Z1.GetRe() * Z2.GetRe() - Z1.GetIm() * Z2.GetIm());
	tmp.SetIm(Z1.GetRe() * Z2.GetIm() + Z2.GetRe() * Z1.GetIm());
	return tmp;
}

bool operator == (const Complex_Public Z1, const Complex_Public Z2)
{
	return Z1.GetRe() == Z2.GetRe() && Z1.GetIm() == Z2.GetIm();
}