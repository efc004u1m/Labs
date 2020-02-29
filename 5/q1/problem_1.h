#include <string>
using namespace std;

struct Student {
    string first_name;
    string last_name;
    int age;
};

string minAge(Student s[], int n);