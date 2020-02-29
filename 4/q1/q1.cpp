#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

/*
int main () {
	
    int a = 3, b = 4;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
	return 0;
}
*/