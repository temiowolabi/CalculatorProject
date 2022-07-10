#pragma once
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
public:
	// pushes a new operand onto the stack
	void push(T operand);
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
};


template <class T>
void RPNCalculator<T>::add()
{
	if (values() >= 2)
	{
		push(pop() + pop());
	}
}


template <class T>
void RPNCalculator<T>::subtract()
{
	if (values() >= 2)
	{
		push(0 - pop() + pop());
	}
}


template <class T>
void RPNCalculator<T>::multiply()
{
	if (values() >= 2)
	{
		push(pop() * pop());
	}
}


template <class T>
void RPNCalculator<T>::divide()
{
	if (values() >= 2)
	{
		push(1 / pop() * pop());
	}
}


template <class T>
bool RPNCalculator<T>::isEmpty()
{
	return topNum == 0;
}


template <class T>
void RPNCalculator<T>::clear()
{
	topNum = 0;
}


template <class T>
T RPNCalculator<T>::value() {
	if (topNum > 0)
	{
		return data[topNum - 1];
	}

	return 0;
}


template <class T>
T RPNCalculator<T>::pop()
{
	T popped_element = st[top];

	topNum--;

	return popped_element;

}
