//============================================================================
// Name        : fibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;

/*
// rekursiv
template <class T>
T rek_fibonacci(T n) {
	switch (static_cast<int>(n)) {
	case 0: return n;
	case 1: return n;
	default: return rek_fibonacci(n-1)+rek_fibonacci(n-2);
	}
}
*/


// iterativ
template <class T>
T fibonacci(T n) {
	T current, pre = 1, prepre = 0;

	if (n == 0) return 0;
	if (n == 1) return 1;
    for (T i = 1;i < n; i++) {
    	 if ((pre + prepre) > std::numeric_limits<T>::max())
    		 throw overflow_error("overflow error");
	     current = pre + prepre;
	     prepre  = pre;
	     pre     = current;

	}
    return current;
}


int main() {
	cout << "!!!Hello Fibonacci!!!" << endl;
	for (unsigned char i=0;i<14;i++)
		cout << (int)i << " " << (unsigned int)fibonacci(i) << endl;
	cout << endl;
	for (unsigned short i=0;i<24;i++)
		cout << i << " " << (unsigned short)fibonacci(i) << endl;
	cout << endl;
	for (unsigned int i=0;i<59;i++)
		cout << i << " " << (unsigned int)fibonacci(i)      << endl;
	cout << endl;
	for (unsigned long i=0;i<68;i++)
		cout << (unsigned long)fibonacci(i)      << endl;
	cout << endl;
	for (unsigned long long i=0;i<99;i++)
		cout << (unsigned long long)fibonacci(i) << endl;
	cout << endl;
	for (double i=0;i<99;i++)
		cout << (double)fibonacci(i) << endl;
	return 0;
}
