#include <iostream>
#include <fstream>
#include "q4.cpp"
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
    
    int count_failed = 0;
    cout << "===============================================" << endl;
    cout << "Running test case " << 1 << endl;
        
    try {
        Complex c1, c2;
        c1.real = 1;
        c1.imaginary = 1;
        c2.real = 1;
        c2.imaginary = 1;

        Complex c3;
        c3 = sum(c1, c2);
        if (c3.real != 2) {
            cout << "FAILED sum: real part incorrect!" << endl;
            ++count_failed;
        }
        if (c3.imaginary != 2) {
            cout << "FAILED sum: imaginary part incorrect!" << endl;
            ++count_failed;
        }

        c3 = difference(c1, c2);
        if (c3.real != 0) {
            cout << "FAILED difference: real part incorrect!" << endl;
            ++count_failed;
        }
        if (c3.imaginary != 0) {
            cout << "FAILED difference: imaginary part incorrect!" << endl;
            ++count_failed;
        }

        c3 = product(c1, c2);
        if (c3.real != 0) {
            cout << "FAILED product: real part incorrect!" << endl;
            ++count_failed;
        }
        if (c3.imaginary != 2) {
            cout << "FAILED product: imaginary part incorrect!" << endl;
            ++count_failed;
        }

        c3 = division(c1, c2);
        if (c3.real != 1) {
            cout << "FAILED division: real part incorrect!" << endl;
            ++count_failed;
        }
        if (c3.imaginary != 0) {
            cout << "FAILED division: imaginary part incorrect!" << endl;
            ++count_failed;
        }

    } catch(const std::exception& e) {
        cout << "FAILED TEST CASE: " << e.what() << '\n';
    }

    if (count_failed == 0) {
        cout << "PASSED test case!\n";
    }
    cout << "===============================================" << endl;
    cout << "Count of failed test cases: " << count_failed << endl;
    return 0;
}