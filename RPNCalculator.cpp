#include "RPNCalculator.h"
#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>  
#include <string>
#include <regex>
using namespace std;



//This function is used for checking the operation options for the calculator
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
	regex regex_pattern("-?[0-9]+.?[0-9]+");

	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "D00227197: " << endl;
	cout << "SD3A: " << endl;
	cout << "The operations avaiable are: 'Addition (+), ' 'Subtraction (-), ' 'Multiplication (*) & ' 'Division (/)' " << endl;

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



		 //The following function checks if the input is a string or integer.
		 //The user adds numbers and the loop will keep going until 
		// 1) The user inputs 'q' to quit
		// 2) The user inputs 'c' to clear the stack
		// 3) The user picks one of the operands to complete the equation

		//Essentially until it no longer detects an integer

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
		else {
			cout << "Error, invalid input " << endl;
		}
	}

		}
	}







int main() {

	menuStuff();

	
	return 0;
}