#include <iostream>
using namespace std;

void sort_names(int entry[], char* names[], int num) {
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < i; ++j) {
            if (entry[j] > entry[j + 1]) {
                swap(entry[j], entry[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }
}

/*
int main () {
	
    int entry[3] = {3, 1, 2};
    char* names[3] = {"sahil", "akshit", "pratik"};

    sort_names(entry, names, 3);

    for (int i = 0; i < 3; ++i) {
        cout << entry[i] << " " << names[i] << endl;
    }
	return 0;
}
*/