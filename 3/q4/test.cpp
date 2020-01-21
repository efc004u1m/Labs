#include <iostream>
#include "reverse.h"

using namespace std;
int main () {
	char str[5] = "abcd";
	cout << "Before reversing: " << str << endl;
	reverseString(str);
	cout << "After reversing: " << str << endl;
}
