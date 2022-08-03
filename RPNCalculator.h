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
	double result;
	double capacity;
	T* a;
	T* b;
public:
	// pushes a new operand onto the stack
	bool push(T operand);
	// binary operators:
	void add(T c, T d);
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

	double result();
};

/*template<class T> struct Node {
	T value;
	Node<T>* next;
	Node() :next(nullptr) {};
	Node(T t) : value(t), next(nullptr) {}
};*/


template <class T>
bool RPNCalculator<T>::push(T operand) {
	/*if (topNum != capacity)
	{
		data[topNum] = operand;
		topNum++;
		return true;
	}
	return false;*/


	/*
	Node<T>* pnode = new Node<T>(value);
	pnode->next = head->next;
	head->next = pnode;
	length++;*/
}

template <class T>
void RPNCalculator<T>::add(T c, T d)
{
	//cin >> a;
	//cin >> b;

	result = c + d;
//	push(result);

	//cout >> result;
	//return result;
};


template <class T>
void RPNCalculator<T>::subtract()
{

	result = a - b;

	//return result;
};


template <class T>
void RPNCalculator<T>::multiply()
{
	
	result = a * b;

	//cout >> result;

	return result;
};


template <class T>
void RPNCalculator<T>::divide()
{

	result = a / b;

	return result;
};

template<class T>
bool RPNCalculator<T>::isEmpty() {
	return capacity == 0; 
}

template<class T>
void RPNCalculator<T>::clear(){
	while (capacity() > 0)    //until the there is nothing left
		pop();              //keep popping things out
}

template<class T>
void RPNCalculator<T>::square() {
	//only square positive numbers
}
