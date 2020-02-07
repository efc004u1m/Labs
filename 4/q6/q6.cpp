#include <iostream>
using namespace std;

int determinant(int mat[3][3]) {
    int a = mat[0][0];
    int b = mat[0][1];
    int c = mat[0][2];
    int d = mat[1][0];
    int e = mat[1][1];
    int f = mat[1][2];
    int g = mat[2][0];
    int h = mat[2][1];
    int i = mat[2][2];
    return a*(e*i - h*f) - b*(d*i - f*g) + c*(d*h - e*g);
}

void multiply(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

/*
int main () {
    int mat[3][3] = {{10, 8, 1}, {1, 2, 1}, {1, 1, 1}};
    cout << determinant(mat) << endl;
}
*/