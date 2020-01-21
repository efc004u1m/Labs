#include <iostream>
#include "swap.h"

using namespace std;
int main () {
	int a = 3, b = 4, c = 5;
	int *d = &a;
	int *e = &b;
	int *f = &c;
	cout << "Before swapping: a: " << a << ", b: " << b << ", c: " << c <<  endl;
	swapCyclic(d, e, f);
	cout << "After swapping: a: " << a << ", b: " << b << ", c: " << c <<  endl;
}
