#include "RPNCalculator.h"
#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>  
#include <string>
using namespace std;



bool operations(const string& option) {
	string array[] = { "+", "-", "*", "/", "n", "s", "p"};
	for (int i = 0; i < sizeof(array); i++) {
		if (option == array[i]) {
			return true;
		}
		return false;
	}
}


bool menuStuff() {

	RPNCalculator<double> functions;
	double num;	
	string option;
	string input;
	string line;

	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "D00227197: " << endl;
	cout << "SD3A: " << endl;
	cout << "The operations avaiable are: 'Addition (+), ' 'Subtraction (-), ' 'Multiplication (*) & ' 'Division (/)' " << endl;
	//cout << "Would you like to see the other available commands? " << endl;


	cout << "(1) Entering s will square the value.  " << endl;
	cout << "(2) Entering n will negate the value.  " << endl;
	cout << "(3) Entering p will pop (remove) the current value off the stack. " << endl;
	cout << "(4) Entering c will clear the calculator’s stack.  " << endl;
	cout << "(5) Enter Q to quit. " << endl;

		while (true) {

	functions.print();

	if (functions.value() == 0)
	{
		cout << "X >";
	}
	else{
	cout << functions.value() << " > ";
	}
		cin>> input;



	if (istringstream(input) >> num) {
		functions.push(num);
	}
	else if (operations) {

		if (input == "q" || input == "Q") {
			exit(0);
		}
		else if (input == "c" || input == "C") {
			functions.clear();
		}
		else if (input == "+") {
			functions.add();			
		}
		else if (input == "-")
		{
			functions.subtract();
		}
		else if (input == "*")
		{
			functions.multiply();
		}
		else if (input == "/")
		{
			functions.divide();
		}
		else if (input == "n")
		{
			functions.negate();
		}
		else if (input == "s")
		{
			functions.square();
		}
		else if (input == "p")
		{
			functions.pop();
		}
	}

		}
	}







int main() {

	menuStuff();

	
	return 0;
}