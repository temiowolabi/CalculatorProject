#include "RPNCalculator.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void menu() {
	int input;
	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;

};


/*
void addFunction() {

	RPNCalculator<T>::add;
}; */


void addFunction() {

	double a;
	double b;

	cout << "Input :" << endl;
	cin >> a;
	cout << "Input :" << endl;
	cin >> b;
	//RPNCalculator<int> add;



	RPNCalculator<double> addFunction;
	addFunction.add(a, b);
	//addFunction.push();
}


int main() {
	//RPNCalculator<double> addFunction;
	//addFunction.add();
	//RPNCalculator<T>::add;

	menu();
	addFunction();

	
	return 0;
}