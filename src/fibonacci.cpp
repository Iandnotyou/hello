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


// rekursiv
template <typename T>
T rek_fibonacci(T n) {
	switch (static_cast<int>(n)) {
	case 0: return n;
	case 1: return n;
	default: return rek_fibonacci(n-1)+rek_fibonacci(n-2);
	}
}



// iterativ
template <typename T>
T fibonacci(T n) {
	T current, pre = 1, prepre = 0;

	if (n == 0) return 0;
	if (n == 1) return 1;
    for (T i = 1;i < n; i++) {
	     current = pre + prepre;
    	 if (current != pre + prepre)
    		 throw 999; // overflow_error("overflow error");
	     prepre  = pre;
	     pre     = current;

	}
    return current;
}


int main() {

	cout << "!!!Hello Fibonacci!!!" << endl;

	for (unsigned char i=0;i<99;i++)
		try {
		  cout << (int)i << " " << (unsigned int)fibonacci(i) << endl;
		} catch (const int &e) {
	        std::cerr << "overflow at i = " << (unsigned int)i << endl;
	      break;
		}
	cout << endl;

	for (unsigned int i=0;i<51;i++)
		try {
		  cout << (unsigned int)i << " " << (unsigned int)fibonacci(i) << endl;
		} catch (const std::exception &e) {
	        std::cerr << "overflow at i = " << (unsigned int)i << endl;
	      break;
		}
	cout << endl;

	for (unsigned long i=0;i<50;i++)
		try {
		  cout << (unsigned long)i << " " << (unsigned long)fibonacci(i) << endl;
		} catch (const std::exception &e) {
	      std::cerr << "overflow at " << i << endl;
		}
	cout << endl;


	for (unsigned long long i=0;i<97;i++)
		try {
		  cout << (unsigned long long)i << " " << (unsigned long long)fibonacci(i) << endl;
		} catch (const std::exception &e) {
	      std::cerr << "overflow at " << i << endl;
		}
	cout << endl;

	return 0;
}
