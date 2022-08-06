#include "RPNCalculator.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void menu() {
	//int input;
	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;

/*	RPNCalculator<string> menuStuff;

	string input;

	cout << "Input :" << endl;
	cin >> input;

	cout << menuStuff.menuOptions(input) << endl;*/


	
};




/*
void addFunction() {

	RPNCalculator<T>::add;
}; */


void addFunction() {

	double a;
	double b;

	RPNCalculator<double> addFunction;

	//RPNCalculator<double>(*funcPtr)(double, double) = addFunction;

	//RPNCalculator<double> addFunction;

	cout << "Input :" << endl;
	cin >> a;
	cout << "Input :" << endl;
	cin >> b;
	//RPNCalculator<int> add;


	//RPNCalculator<double> addFunction;
	//double(*pointer)(double, double) = addFunction;
	addFunction.add(a, b);
	cout << addFunction.display() << endl;
	//addFunction.push();
}


void minusFunction() {

	double a;
	double b;

	RPNCalculator<double> minusFunction;

	cout << "Input :" << endl;
	cin >> a;
	cout << "Input :" << endl;
	cin >> b;

	minusFunction.subtract(a, b);
	cout << minusFunction.display() << endl;
}


void multiplyFunction() {

	double a;
	double b;

	RPNCalculator<double> multiplyFunction;

	cout << "Input :" << endl;
	cin >> a;
	cout << "Input :" << endl;
	cin >> b;

	multiplyFunction.multiply(a, b);
	cout << multiplyFunction.display() << endl;
}


bool menuStuff() {

	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;

	string option;
	string input;

	cout << "Option :" << endl;
	cin >> option;

	if (option == "q" || option == "Q") {
		exit(0);
	}
	else if (option == "+") {
		cout << "Addition has been selected" << endl;
		addFunction();
	}
	else if (option == "-")
	{
		cout << "Subtraction has been selected" << endl;
		minusFunction();
	}
	else if (option == "*")
	{
		cout << "Multiplication has been selected" << endl;
		multiplyFunction();
	}

}



int main() {

	//RPNCalculator<double> addFunction;
	//addFunction.add();
	//RPNCalculator<T>::add;

	menuStuff();
	//addFunction();

	
	return 0;
}