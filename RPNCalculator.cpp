#include "RPNCalculator.h"
#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>  
#include <string>
using namespace std;



bool operations(const string& option) {
	string array[] = { "+", "-", "*", "/", "n", "s"};
	for (int i = 0; i < 6; i++) {
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
	ifstream myfile("example.txt");

	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;
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


	//	while (getline(myfile, line)) {

	//}


	if (istringstream(input) >> num) {
		functions.push(num);
	}
	else if (operations) {

		if (input == "q" || input == "Q") {
			exit(0);
		}
		else if (input == "c" || input == "C") {
			//clear topNum
			//functions.print();
			//return 0;
		}
		else if (input == "+") {
			//cout << "Addition has been selected" << endl;
			//addFunction();
			functions.add();
			//while (getline(myfile, input)) {

			//}

			//ofstream MyFile("hey.txt");
			//MyFile << functions.add();
			
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
		else if (input == "/")
		{
			functions.divide();
			//cout << "Multiplication has been selected" << endl;
			//multiplyFunction();

		}
		else if (input == "n")
		{
			functions.negate();
			//cout << "Multiplication has been selected" << endl;
			//multiplyFunction();
		}
		else if (input == "s")
		{
			functions.square();
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