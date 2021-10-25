#include <iostream>
#include <string>;
using namespace std;

class Number
{
public:
	int num1;
	int num2;
	void set(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void print()
	{
		cout << "First num: " << num1 << "\nSecond num: " << num2 << "\n\n";
	}
};

class Fraction
{
public:
	int numer;
	int denumer;
	void Add(int num1, int den1, int num2, int den2)
	{
		cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num1 * den2 + num2 * den1 << "/" << den1 * den2 << "\n";
	}
	void Sub(int num1, int den1, int num2, int den2)
	{
		cout << num1 << "/" << den1 << " - " << num2 << "/" << den2 << " = " << num1 * den2 - num2 * den1 << "/" << den1 * den2 << "\n";
	}
	void Mult(int num1, int den1, int num2, int den2)
	{
		cout << num1 << "/" << den1 << " * " << num2 << "/" << den2 << " = " << num1 * num2 << "/" << den1 * den2 << "\n";
	}
	void Div(int num1, int den1, int num2, int den2)
	{
		cout << num1 << "/" << den1 << " / " << num2 << "/" << den2 << " = " << num1 * den2 << "/" << den1 * num2 << "\n";
	}
};

int main()
{
	Fraction n1{ 1,3 };
	Fraction n2{ 1,7 };
	n1.Add(n1.numer, n1.denumer, n2.numer, n2.denumer);
	n1.Sub(n1.numer, n1.denumer, n2.numer, n2.denumer);
	n1.Mult(n1.numer, n1.denumer, n2.numer, n2.denumer);
	n1.Div(n1.numer, n1.denumer, n2.numer, n2.denumer);
	return 0;
}