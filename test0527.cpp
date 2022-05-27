#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Complex {
public:
	double m;
	double n;
	Complex(double _m, double _n) {
		m = _m;
		n = _n;
	}
	Complex() {
		m = 0;
		n = 0;
	}
	void print()
	{
		if (n > 0)
		{
			if (m != 0) cout << "(" << m << "+" << n << "i" << ")";
			else cout << "(" << n << "i" << ")";
		}
		else if (n == 0)
		{
			if (m != 0) cout << "(" << m << ")";
			else cout << "(" << m << ")";
		}
		else if (n < 0) cout << "(" << m << n << "i" << ")";
	}
	
};
Complex operator*(Complex a, Complex b) {
	Complex tmp;
	tmp.m = a.m * b.m - a.n * b.n;
	tmp.n = a.m * b.n + a.n * b.m;
	return tmp;
}
int main()
{
	double a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	Complex A1(a1, a2), A2(b1, b2), A3;

	A3 = A1 * A2;
	A1.print();
	cout << "*";
	A2.print();
	cout << "=";
	A3.print();
}