/*
References:

From lines 93 to 136 (where the add, minus, multiply and divide functions are implemented)
the following link was used to help implement that. 
https://cplusplus.com/forum/general/172260/ In particular, the post by the user Aeck who used the pop
function in adding operands. After searching on the internet I saw and understood why many others opted for this route.


*/




#pragma once
#include <string>
#include <iostream>
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

	//double result();
	double display();


	void print();

	//Destructor
	~RPNCalculator();
};

/*template<class T> struct Node {
	T value;
	Node<T>* next;
	Node() :next(nullptr) {};
	Node(T t) : value(t), next(nullptr) {}
};
*/

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



template<class T>
T  RPNCalculator<T>::pop() {
	if (topNum > 0)
	{
		double num = data[topNum];
		topNum--;
		return num;
	}
	//else if (isEmpty) {
	//	cout << "You can't delete from an empty stack. Please try again.";
	//}
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
};


template <class T>
void RPNCalculator<T>::subtract()
{

	double a = value();
	pop();
	double b = value();
	pop();

	result = b - a;

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

};

template<class T>
bool RPNCalculator<T>::isEmpty() {
	return topNum == 0;
}

/*template<class T>
void RPNCalculator<T>::clear(){
	while (capacity() > 0)    //until the there is nothing left
		pop();              //keep popping things out
}*/

template<class T>
void RPNCalculator<T>::square() {
	//only square positive numbers

	double a = value();
	pop();
	pop();

	double result = a * a;
	push(result);


}


template<class T>
void RPNCalculator<T>::negate() {
	//only square positive numbers

	double result = value(), a = value();
	pop();
	pop();

	if (a > 0)
	{
		result = a * -1;
	}

	push(result);


}


template<class T>
T RPNCalculator<T>::value() {

	if (topNum > 0) {
		return data[topNum - 1];
	}
	return 0;
}
//template<class T>
//double RPNCalculator<T>::display() {
//
//	double a = pop();
//	//push(a);
//
//	cout << a;
//	//cout << a;
//
//	return a;
//}


template<class T>
void RPNCalculator<T>::print() {
	for (int i = 0; i < topNum; i++) {
		cout << ">" << data[i];
	}
	cout << endl;
}

template <class T>
void RPNCalculator<T>::clear()
{
	topNum = 0;
}