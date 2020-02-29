#include <iostream>
#include <fstream>
#include "q2.cpp"
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
    
    int id;
    string first;
    string last;
    int sal;
    string res;
    
    int count_failed = 0;
    for (int i = 0; i < t; ++i) {
        cout << "===============================================" << endl;
        cout << "Running test case " << i << endl;

        string number = to_string(i);
        if (i < 10) {
            number = "0" + number;
        }

        fin.open(base_file + "in" + number + ".txt");
        fout.open(base_file + "out" + number + ".txt");
        fin >> id >> first >> last >> sal;
        
        try {
            Employee e(id, first, last, sal);
            string query;
            int id2, x;
            int id3;
            bool failed = false;
            for (int i = 0; i < 9; ++i) {
                fin >> query;
                if (query == "getId") {
                    id2 = e.getId();
                    fout >> id3;
                    if (id2 != id3) {
                        failed = true;
                        cout << "FAILED getId()!" << endl;
                        cout << "Your id: " << id2 << endl;
                        cout << "Expected id: " << id3 << endl;
                        ++count_failed;
                    }
                } else if (query == "getFirstName") {
                    string s1 = e.getFirstName();
                    string s2;
                    fout >> s2;
                    if (s1 != s2) {
                        failed = true;
                        cout << "FAILED getFirstName()!" << endl;
                        cout << "Your result: " << s1 << endl;
                        cout << "Expected result: " << s2 << endl;
                        ++count_failed;
                    }
                } else if (query == "getLastName") {
                    string s1 = e.getLastName();
                    string s2;
                    fout >> s2;
                    if (s1 != s2) {
                        failed = true;
                        cout << "FAILED getLastName()!" << endl;
                        cout << "Your result: " << s1 << endl;
                        cout << "Expected result: " << s2 << endl;
                        ++count_failed;
                    }
                } else if (query == "getName") {
                    string s1 = e.getName();
                    string s2, s3;
                    fout >> s2 >> s3;
                    string s4 = s2 + " " + s3;
                    if (s1 != s4) {
                        failed = true;
                        cout << "FAILED getName()!" << endl;
                        cout << "Your result: " << s1 << endl;
                        cout << "Expected result: " << s4 << endl;
                        ++count_failed;
                    }
                } else if (query == "getSalary") {
                    int s1 = e.getSalary();
                    int s2;
                    fout >> s2;
                    if (s1 != s2) {
                        failed = true;
                        cout << "FAILED getSalary()!" << endl;
                        cout << "Your result: " << s1 << endl;
                        cout << "Expected result: " << s2 << endl;
                        ++count_failed;
                    }
                } else if (query == "setSalary") {
                    fin >> x;
                    e.setSalary(x);
                } else if (query == "getAnnualSalary") {
                    int s1 = e.getAnnualSalary();
                    int s2;
                    fout >> s2;
                    if (s1 != s2) {
                        failed = true;
                        cout << "FAILED getAnnualSalary()!" << endl;
                        cout << "Your result: " << s1 << endl;
                        cout << "Expected result: " << s2 << endl;
                        ++count_failed;
                    }
                } else if (query == "raiseSalary") {
                    fin >> x;
                    e.raiseSalary(x);
                }
            }
            if (!failed) {
                cout << "PASSED TEST CASE!\n";
            }
        } catch(const std::exception& e) {
            cout << "FAILED TEST CASE: " << e.what() << '\n';
            continue;
        }

        fin.close();
        fout.close();
    }
    cout << "===============================================" << endl;
    cout << "Count of failed test cases: " << count_failed << endl;
    return 0;
}