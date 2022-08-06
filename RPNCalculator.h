/*
References:

From lines 93 to 136 (where the add, minus, multiply and divide functions are implemented)
the following link was used to help implement that. 
https://cplusplus.com/forum/general/172260/ In particular, the post by the user Aeck who used the pop
function in adding operands. After searching on the internet I saw and understood why many others opted for this route.


*/




#pragma once
#include <string>
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
	// pushes a new operand onto the stack
	void push(float f);

	bool isFull();
	// binary operators:
	void add(T a, T b);
	void subtract(T a, T b);
	void multiply(T a, T b);
	void divide(T a, T b);
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
};

/*template<class T> struct Node {
	T value;
	Node<T>* next;
	Node() :next(nullptr) {};
	Node(T t) : value(t), next(nullptr) {}
};


template <class T>
bool RPNCalculator<T>::push(T operand) {

	if (topNum != capacity)
	{
		data[topNum] = operand;
		topNum++;
		return true;
	}
	return false;
}
*/

template <class T>
bool RPNCalculator<T>::isFull() {

	if (topNum == 19) {
		return true;
	}
	else {
		return false;
	}
}



template <class T>
void RPNCalculator<T>::add(T a, T b)
{

	a = pop();
	b = pop();

	result = a + b;
};


template <class T>
void RPNCalculator<T>::subtract(T a, T b)
{

	a = pop();
	b = pop();

	result = a - b;

	//return result;
};


template <class T>
void RPNCalculator<T>::multiply(T a, T b)
{

	a = pop();
	b = pop();
	
	result = a * b;

};


template <class T>
void RPNCalculator<T>::divide(T a, T b)
{
	a = pop();
	b = pop();

	result = a / b;

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
}

template<class T>
T  RPNCalculator<T>::pop() {
	if (topNum > 0)
	{
		topNum--;
	}
	return topNum;
}

template<class T>
double RPNCalculator<T>::display() {

	double a = pop();
	//push(a);
	//cout << a;

	return a;
}


