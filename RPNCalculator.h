/*
* 
* 
* 
* This file contains the implementation for the stack. It contains the following functions:
* - Push 
* - isEmpty
* - Clear 
* - Pop
* 

References:

https://stackoverflow.com/questions/69447591/write-calculation-output-in-a-txt-file
This stack overflow link helped me with writing to a file.

https://stackoverflow.com/questions/4155537/writing-into-a-text-file-without-overwriting-it
This stack overflow link showed me how to append items being written to the file so the values won't be overrided by each new calculation.



*/




#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

template<class T> 
class RPNCalculator

{
private:
	/* NOTE:
	* 1. You MUST use an instance of a Stack
	* 2. The following functions are to be implemented as defined for RP
	*/


	T* data;
	int topNum;
	double result;
	double capacity;
	T* a;
	T* b;
public:
	RPNCalculator(int i = 2);
	// pushes a new operand onto the stack
	bool push(T operand);

	bool isFull();
	// binary operators:
	void add();
	void subtract();
	void multiply();
	void divide();
	// squares the current value
	void square();
	// negates, i.e. 3 becomes -3
	void negate();
	// tests to see if there are elements on the stack
	bool isEmpty();
	// clears out the stack
	void clear();
	// returns the topmost value
	T value();
	// returns the topmost value and pops it off the top
	T pop();


	void print();

	//Destructor
	~RPNCalculator();
};

template <class T>
RPNCalculator<T>::RPNCalculator(int i) {
	data = new T[i];
	capacity = i;
	topNum = 0;
}

template <class T>
RPNCalculator<T>::~RPNCalculator()
{
	topNum = 0;
	capacity = 0;
	delete[] data;
}


//This function adds values to the top of the stack.
template <class T>
bool RPNCalculator<T>::push(T result) {

	if (topNum != capacity)
	{
		data[topNum] = result;
		topNum++;
		return true;
	}
	return false;
}


template <class T>
bool RPNCalculator<T>::isFull() {

	if (topNum == 19) {
		return true;
	}
	else {
		return false;
	}
}


//This function removes values from the top of the stack
template<class T>
T  RPNCalculator<T>::pop() {
	if (topNum > 0)
	{
		double num = data[topNum];
		topNum--;
		return num;
	}
	else {
		clear();
	}
	return topNum;
}

template <class T>
void RPNCalculator<T>::add()
{
	double a = value();
	pop();
	double b = value();
	pop();
	
	result = a + b;
	
	push(result);

	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);

	//MyFile << a << "+" << b << "=" << result << endl;
};


template <class T>
void RPNCalculator<T>::subtract()
{

	double a = value();
	pop();
	double b = value();
	pop();

	result = b - a;



	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << b << "-" << a << "=" << result << endl;

	push(result);
};


template <class T>
void RPNCalculator<T>::multiply()
{

	double a = value();
	pop();
	double b = value();
	pop();
	
	result = a * b;

	push(result);

	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << a << "*" << b << "=" << result << endl;

};


template <class T>
void RPNCalculator<T>::divide()
{
	double a = value();
	pop();
	double b = value();
	pop();

	result = a / b;

	push(result);

	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << a << "÷" << b << "=" << result << endl;

};

//This function lets you know if the stack is empty or not.
template<class T>
bool RPNCalculator<T>::isEmpty() {
	return topNum == 0;
}

template<class T>
void RPNCalculator<T>::square() {

	double a = value();
	pop();
	pop();

	double result = a * a;
	push(result);

	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << a << "²" << "=" << result << endl;
}


template<class T>
void RPNCalculator<T>::negate() {

	double result = value(), a = value();
	pop();
	pop();

	if (a > 0)
	{
		result = a * -1;
	}

	push(result);

	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << a << "¬" << "=" << result << endl;
}



//This function returns the value at the top of the stack.
template<class T>
T RPNCalculator<T>::value() {

	if (topNum > 0) {
		return data[topNum - 1];
	}
	return 0;
}


//This function prints the value of the top number in the stack.
template<class T>
void RPNCalculator<T>::print() {
	for (int i = 0; i < topNum; i++) {
		cout << ">" << data[i];
	}
	cout << endl;
}


//This function clears the stack.
template <class T>
void RPNCalculator<T>::clear()
{
	while (topNum != 0)
	{
		pop();
	}
	//fstream MyFile;
	//MyFile.open("RPN.log.txt", fstream::app);
	//MyFile << "Cleared";
}

