#include <iostream>
#include "swap.h"

using namespace std;
int main () {
	int a = 3, b = 4;
	int *c = &a;
	int *d = &b;
	cout << "Before swapping: a: " << a << ", b: " << b << endl;
	swap(c, d);
	cout << "After swapping: a: " << a << ", b: " << b << endl;
}
