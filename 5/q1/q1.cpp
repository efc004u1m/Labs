#include <iostream>
#include <string>
using namespace std;

struct Student {
    string first_name;
    string last_name;
    int age;
};

string minAge(Student s[], int n) {
    int minAge = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i].age < minAge) {
            minAge = s[i].age;
            idx = i;
        }
    }
    return s[idx].first_name + " " + s[idx].last_name;
}

/*
int main () {
    Student st[2] = {{"aaa", "bbb", 20}, {"abc", "xyz", 19}};
    cout << minAge(st, 2) << endl;
    return 0;
}
*/