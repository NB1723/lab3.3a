#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Complex
{
private:
	int x, y;

public:
	Complex();
	Complex(int x, int y);
	Complex(const Complex& v);

	int GetRe() const { return x; }
	int GetIm() const { return y; }

	void SetRe(int value) { x = value; }
	void SetIm(int value) { y = value; }

	Complex& operator = (const Complex& n);
	operator string() const;

	friend ostream& operator <<(ostream& out, const  Complex& a);
	friend istream& operator >>(istream& in, Complex& a);
};