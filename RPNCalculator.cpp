#include "RPNCalculator.h"
#include <iostream>
#include <queue>
#include <sstream>  
#include <string>
using namespace std;



bool operations(const string& option) {
	string array[] = { "+", "-", "*", "/", "^"};
	for (int i = 0; i < 5; i++) {
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
	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;
		while (true) {
	functions.print();
	cout << functions.value() << " > ";
		cin>> input;




	if (istringstream(input) >> num) {
		functions.push(num);
	}
	else if (operations) {
		if (option == "q" || option == "Q") {
			exit(0);
		}
		else if (option == "c" || option == "C") {
			//clear topNum
			//functions.print();
			//return 0;
		}
		else if (input == "+") {
			//cout << "Addition has been selected" << endl;
			//addFunction();
			functions.add();
			
		}
		else if (input == "-")
		{
			//cout << "Subtraction has been selected" << endl;
			//minusFunction();
			functions.subtract();
		}
		else if (input == "*")
		{
			functions.multiply();
			//cout << "Multiplication has been selected" << endl;
			//multiplyFunction();
		}
	}

		}
	}







int main() {

	menuStuff();

	
	return 0;
}