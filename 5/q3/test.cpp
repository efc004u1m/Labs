#include <iostream>
#include <fstream>
#include "Account.h"
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
        Account ac("1", "MyName", 0);
        int bal = ac.getBalance();
        if (bal != 0) {
            cout << "FAILED getBalance()!" << endl;
            ++count_failed;
        }
        string name = ac.getName();
        if (name != "MyName") {
            cout << "FAILED getName()!" << endl;
            ++count_failed;
        }
        string id = ac.getID();
        if (id != "1") {
            cout << "FAILED getId()!" << endl;
            ++count_failed;
        }
        int newBal = ac.credit(10);
        if (newBal != 10) {
            cout << "FAILED credit()!" << endl;
        }
        newBal = ac.debit(10);
        if (newBal != 0) {
            cout << "FAILED debit()!" << endl;
        }
        newBal = ac.debit(1000);
        cout << endl;
        cout << "Amount exceeded balance case! " << endl;
        if (newBal != 0) {
            cout << "FAILED debit()!" << endl;
        }
        cout << endl;

    } catch(const std::exception& e) {
        cout << "FAILED TEST CASE: " << e.what() << '\n';
    }

    cout << "===============================================" << endl;
    cout << "Count of failed test cases: " << count_failed << endl;
    return 0;
}