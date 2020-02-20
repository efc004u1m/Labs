#include <bits/stdc++.h>
#include <random>
using namespace std;
ofstream fin, fout;
typedef long long ll;

void generateOneTest() {

    random_device device;
    mt19937 generator(device());
    
    uniform_int_distribution<int> ng(1, 10);
    uniform_int_distribution<int> sng(1, 10);
    uniform_int_distribution<int> ag(1, 100);
    uniform_int_distribution<int> cg(0, 25);

    int n = ng(generator);
    fin << n << endl;
    
    unordered_map<int, int> done;
    string res = "";
    int min_age = 101;
    for (int i = 0; i < n; ++i) {
        int l = sng(generator);
        string first, last;
        for (int j = 0; j < l; ++j) {
            char c = cg(generator) + 'a';
            first += c;
        }
        l = sng(generator);
        for (int j = 0; j < l; ++j) {
            char c = cg(generator) + 'a';
            last += c;
        }
        int age = ag(generator);
        while (done.find(age) != done.end()) {
            age = ag(generator);
        }
        done[age] = 1;
        fin << first << " " << last << " " << age << endl;
        if (age < min_age) {
            res = first + " " + last;
            min_age = age;
        }
    }
    fout << res << endl;
}

int main() {

    string baseLocation = "/Users/sahilbansal/Desktop/DSA_LAB/Labs - Github/5/q1/test_cases/";

    // change the problem number
    // HackerEarth format
    string inputFile = baseLocation + "in";
    string outputFile = baseLocation + "out";

    // No. of test cases
    int N = 10;

    for (int t = 0; t < N; t++) {

        // create the correct file names for multiple tests
        string input = inputFile + "0" + to_string(t) + ".txt";
        string output = outputFile + "0" + to_string(t) + ".txt";

        fin.open(input);
        fout.open(output);
        generateOneTest();
        fin.close();
        fout.close();
    }

  return 0;
}