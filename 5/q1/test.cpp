#include <iostream>
#include <fstream>
#include "problem_1.h"
using namespace std;
ifstream fin, fout;

#define endl '\n'

const string WHITESPACE = "\n\r\t\f\v";
string ltrim(const string& s) {
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == string::npos) ? "" : s.substr(start);
}
string rtrim(const string& s) {
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}
string trim(const string& s) {
    return rtrim(ltrim(s));
}

int main () {
    int t = 10;
    string base_file = "test_cases/";
    int n;
    string first;
    string last;
    int age;
    string res;
    Student* s;
    string expected_first;
    string expected_last;
    string expected;
    for (int i = 0; i < t; ++i) {
        cout << "===============================================" << endl;
        cout << "Running test case " << i << endl;

        string number = to_string(i);
        if (i < 10) {
            number = "0" + number;
        }

        fin.open(base_file + "in" + number + ".txt");
        fin >> n;
        
        s = new Student[n];
        for (int j = 0; j < n; ++j) {
            fin >> first >> last >> age;
            s[j].first_name = first;
            s[j].last_name = last;
            s[j].age = age;
        }

        try {
            res = minAge(s, n);
        }
        catch(const std::exception& e) {
            cout << "FAILED TEST CASE: " << e.what() << endl;
            cout << endl;
            continue;
        }
    
        fout.open(base_file + "out" + number + ".txt");
        fout >> expected_first >> expected_last;
        expected = expected_first + " " + expected_last;

        if (res != expected) {
            cout << "FAILED TEST CASE!" << endl;
            cout << "Your answer: " << res << endl;
            cout << "Expected answer: " << expected << endl;
        } else {
            cout << "PASSED TEST CASE!" << endl;
            cout << "Your answer: " << res << endl;
            cout << "Expected answer: " << expected << endl;
        }
        cout << endl;

        delete[] s;
        fin.close();
        fout.close();
    }
    cout << "===============================================" << endl;

    return 0;
}