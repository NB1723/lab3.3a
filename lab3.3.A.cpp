#include "Complex_Private.h"
#include "Complex_Public.h"

int main()
{
	cout << "Initialization of public A" << endl;
	Complex_Public A1(4, 5), B1;
	cout << "A1 = " << A1 << endl;

	cout << "Size of class: " << sizeof(A1) << endl;

	cout << "Initialization of public B1" << endl;
	cin >> B1;
	cout << "B1 = " << B1 << endl;

	cout << "Sum of complex numbers" << endl;
	Complex_Public C1 = A1 + B1;
	cout << "C1 = " << C1 << endl;

	cout << "Product of complex numbers" << endl;
	Complex_Public D1 = A1 * B1;
	cout << "D1 = " << D1 << endl;

	cout << "Comparison of complex numbers" << endl;
	if (A1 == B1)
		cout << "Complex numbers are equal" << endl;
	else
		cout << "Complex numbers are not equal" << endl;

	cout << "++A1: " << ++A1 << endl;
	cout << "--A1: " << --A1 << endl;
	cout << "A1++: " << A1++ << endl;
	cout << "A1--: " << A1-- << endl << endl;

	cout << "Initialization of private A2" << endl;
	Complex_Private A2(4, 5), B2;
	cout << "A = " << A2 << endl;

	cout << "Size of class: " << sizeof(A2) << endl;

	cout << "Initialization of private B2" << endl;
	cin >> B2;
	cout << "B2 = " << B2 << endl;

	cout << "Sum of complex numbers" << endl;
	Complex_Private C2 = A2 + B2;
	cout << "C2 = " << C2 << endl;

	cout << "Product of complex numbers" << endl;
	Complex_Private D2 = A2 * B2;
	cout << "D2 = " << D2 << endl;

	cout << "Comparison of complex numbers" << endl;
	if (A2 == B2)
		cout << "Complex numbers are equal" << endl;
	else
		cout << "Complex numbers are not equal" << endl;

	cout << "++A2: " << ++A2 << endl;
	cout << "--A2: " << --A2 << endl;
	cout << "A2++: " << A2++ << endl;
	cout << "A2--: " << A2-- << endl << endl;
}