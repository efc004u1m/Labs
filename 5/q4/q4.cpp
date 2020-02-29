#include <iostream>
using namespace std;

class Complex {
    public:
        float real;
        float imaginary;
};

Complex sum(Complex c1, Complex c2) {
    Complex res;
    res.real = c1.real + c2.real;
    res.imaginary = c1.imaginary + c2.imaginary;
    return res;
}

Complex difference(Complex c1, Complex c2) {
    Complex res;
    res.real = c1.real - c2.real;
    res.imaginary = c1.imaginary - c2.imaginary;
    return res;
}

Complex product(Complex c1, Complex c2) {
    float a = c1.real;
    float b = c1.imaginary;
    float c = c2.real;
    float d = c2.imaginary;
    Complex res;
    res.real = a*c - b*d;
    res.imaginary = a*d + b*c;
    return res;
}

Complex division(Complex c1, Complex c2) {
    float a = c1.real;
    float b = c1.imaginary;
    float c = c2.real;
    float d = c2.imaginary;
    Complex res;
    res.real = (a*c + b*d)/(c*c + d*d);
    res.imaginary = (b*c - a*d)/(c*c + d*d);
    return res;
}
/*
void print(Complex c) {
    cout << to_string(c.real) + " + i" << to_string(c.imaginary) << endl;
}

int main () {
    Complex c1;
    c1.real = 2;
    c1.imaginary = 0;
    Complex c2;
    c2.real = 4;
    c2.imaginary = 0;
    
    Complex c3 = sum(c1, c2);
    print(c3);
    c3 = difference(c1, c2);
    print(c3);
    c3 = product(c1, c2);
    print(c3);
    c3 = division(c1, c2);
    print(c3);

    return 0;
}
*/