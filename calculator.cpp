#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void add(double num1,double num2);
void subtract(double num1, double num2);
void divide(double num1, double num2);
void multiply(double num1, double num2);
void calc();
void display();

int main()
{
	char response;

	do {
		display();
		calc();
		system("pause");
		system("cls");
		cout << "\nDo you want to continue?(y/n)";
		cin >> response;
	} while (response != 'n');
}

void display()
{
	cout << "----------------------------------\n";
	cout << "\t\t\t\tCALCULATOR\n";
	cout << "----------------------------------\n\n";

}

void calc()
{
	double num1, num2;
	char op;
	double result;

		cout << "Enter first number ";
		cin >> num1;
		cout << "\nEnter operation";
		cin >> op;
		cout << "\nEnter second number";
		cin >> num2;

		switch (op)
		{
		case'+':
			cout << num1 << op << num2 << " = ";
			add(num1, num2);
			break;
		case'-':
			cout << num1 << op << num2 << " = ";
			subtract(num1, num2);
			break;
		case'/':
			cout << num1 << op << num2 << " = ";
			divide(num1, num2);
			break;
		case'*':
			cout << num1 << op << num2 << " = ";
			multiply(num1, num2);
			break;
		default:
			cout << "Invalid operator!";
			break;
		}

}

void add(double num1, double num2)
{
	double result;
	result = num1 + num2;
	cout << result;
}

void subtract(double num1, double num2)
{
	double result;
	result = num1 - num2;
	cout << result;
}


void divide(double num1, double num2)
{
	double result;
	result = num1 / num2;
	cout << result;
}

void multiply(double num1, double num2)
{
	double result;
	result = num1* num2;
	cout << result;
}
