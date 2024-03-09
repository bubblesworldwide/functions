// functions 2024.cpp : This file contains the 'main' function. Program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//function prototypes
void inputValues(int& num, int& num2);
void calcSum();
void calcDiff();
void calcProduct();
void calcQuotient();
void mathOperation();
int main()
{
	//declaration of variables
	int num = 0;
	int num2 = 0;
	char mathOp = ' ';
	int rand1 = 0;
	int rand2 = 0;

	//generate two random numbers
	srand(time(NULL));
	rand1 = 1 + rand() % 50;
	rand2 = 1 + rand() % 50;

	//calling of functions created
	inputValues(num, num2);

	//allow user to enter math operation
	cout << "Enter a math operator between ( +, -, /, *) : \n";
	cin >> mathOp;

	//introduction of switch-statement
	switch (mathOp)
	{
	case '+':
		//case 1 : addition
		//call sum function
		calcSum();
		break;
	case '-':
		//case 2 : difference
		//call difference function
		calcDiff();
		break;
	case '%':
		//case 3: quotient
		//call quotient function
		calcQuotient();
		break;
	case '*':
		//case 4: product
		//call product function
		calcProduct();
		break;
	default:
		//display message to user
		cout << "Incorrect math function entered.\n";
		break;
	}

	//display 2 random numbers generated
	cout << "First random number : " << rand1 << endl;
	cout << "Second random number : " << rand2 << endl;
	
	system("pause");
	return 0;
}

//first function
void inputValues(int& num, int& num2)
{
	//allow user to enter values
	cout << "Enter 2 integer values : " << endl;
	cin >> num >> num2;
}
//second function
void calcSum()
{
	//declaration of variables
	int sum = 0;
	int num = 0;
	int num2 = 0;
	inputValues(num, num2);
	//calculation of sum
	sum = num + num2;
	cout << "The sum of " << num << " + " << num2 << " = " << sum << endl;
}
//third function
void calcDiff()
{
	//declaration of variables
	int difference = 0;
	int num = 0;
	int num2 = 0;
	inputValues(num, num2);
	//calculation of difference
	difference = num - num2;
	cout << "The difference of " << num << " - " << num2 << " = " << difference << endl;
}
//forth function
void calcProduct()
{
	//declaration of variables
	int product = 0;
	int num = 0;
	int num2 = 0;
	inputValues(num, num2);
	//calculation of difference
	product = num - num2;
	cout << "The difference of " << num << " x " << num2 << " = " << product << endl;
}
void calcQuotient()
{
	//declaration of variables
	int quotient = 0;
	int num = 0;
	int num2 = 0;
	inputValues(num, num2);
	//calculation of difference
	quotient = num % num2;
	cout << "The difference of " << num << " - " << num2 << " = " << quotient << endl;
}
