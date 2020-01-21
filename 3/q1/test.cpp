#include <iostream>
#include "pointer.h"

using namespace std;
int main () {
	int N = 5;
	int arr[N] = {1, 2, 3, 4, 5};
	cout << "The array is [1, 2, 3, 4, 5]" << endl;
	int sum = sum_array(arr, 5);
	cout << "Expected output: 15" << endl;
	cout << "Your output is: " << sum << endl;

}
