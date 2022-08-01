#include "RPNCalculator.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void menu() {
	int input;
	cout << "Welcome to Temi Owolabi's RPN Calculator: " << endl;
	cout << "The operations avaiable are: '+' '-' '*' '/' '^' ('c' or 'clear') ('q' or 'quit') " << endl;

	cout << "Input: " << endl;
	cin >> input;

};


/*
void addFunction() {

	RPNCalculator<T>::add;
}; */


void addFunction() {

	double input;

	cin >> input;
	RPNCalculator<int> add;
}


int main() {
	RPNCalculator<int> add;
	//RPNCalculator<T>::add;


	
	return 0;
}