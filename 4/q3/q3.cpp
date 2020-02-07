#include <iostream>
#include <string.h>
using namespace std;

char* string_with_max_vowels(char* strings[], int num) {
	int maxCount = 0;
	char* res;
	for (int i = 0; i < num; ++i) {
		int vowelCount = 0;
		for (int j = 0; j < strlen(strings[i]); ++j) {
			if (strings[i][j] == 'a' ||
			strings[i][j] == 'e' ||
			strings[i][j] == 'i' ||
			strings[i][j] == 'o' ||
			strings[i][j] == 'u') {
				++vowelCount;
			}
		}
		if (vowelCount > maxCount) {
			maxCount = vowelCount;
			res = strings[i];
		}
	}
	return res;
}

/*
int main () {
	char* strings[5] = {"abc", "defii", "ghi", "jkll", "mmmm"};

	cout << string_with_max_vowels(strings, 5) << endl;
	return 0;
}
*/