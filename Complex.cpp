#include "Complex.h"

Complex::Complex()
	: x(0), y(0)
{}

Complex::Complex(int x, int y)
	: x(x), y(y)
{}

Complex::Complex(const Complex& v)
	: x(v.x), y(v.y)
{}

Complex& Complex::operator = (const Complex& n)
{
	x = n.x;
	y = n.y;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << x << " + i * " << y << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Complex& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, Complex& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	return in;
}