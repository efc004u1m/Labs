#include <bits/stdc++.h>
#include <random>
using namespace std;
ofstream fin, fout;
typedef long long ll;

void generateOneTest() {

    random_device device;
    mt19937 generator(device());
    
    uniform_int_distribution<int> id_g(1, 10);
    uniform_int_distribution<int> salary_g(10000, 20000);
    uniform_int_distribution<int> cg(0, 25);
    uniform_int_distribution<int> len_g(1, 10);

    int id = id_g(generator);
    int sal = salary_g(generator);
    string first, last;
    int flen = len_g(generator);
    int llen = len_g(generator);
    for (int i = 0; i < flen; ++i) {
        first += ('a' + cg(generator));
    }
    for (int i = 0; i < llen; ++i) {
        last += ('a' + cg(generator));
    }

    fin << id << " " << first << " " << last << " " << sal << endl;

    fin << "getId" << endl;
    fout << id << endl;

    fin << "getFirstName" << endl;
    fout << first << endl;

    fin << "getLastName" << endl;
    fout << last << endl;

    fin << "getName" << endl;
    fout << first << " " << last << endl;

    fin << "getSalary" << endl;
    fout << sal << endl;

    int new_sal = salary_g(generator);
    fin << "setSalary " << new_sal << endl;

    sal = new_sal;
    fin << "getSalary" << endl;
    fout << sal << endl;

    fin << "getAnnualSalary" << endl;
    fout << sal*12 << endl;

    int inc = id_g(generator);
    fin << "raiseSalary " << inc << endl;
    sal += (inc/100)*sal;
    fout << sal << endl;
}

int main() {

    string baseLocation = "/Users/sahilbansal/Desktop/DSA_LAB/Labs - Github/5/q2/test_cases/";

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