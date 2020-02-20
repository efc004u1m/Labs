#include <bits/stdc++.h>
using namespace std;
ifstream fin, fout;

int main () {

    int n;
    fin.open("in01.txt");
    fin >> n;

    cout << n << endl;

    string first, last;
    int age;
    for (int i = 0; i < n; ++i) {
        fin >> first >> last;
        fin >> age;

        cout << first << " " << last << " " << age << endl;
    }

    return 0;
}