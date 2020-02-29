#include <iostream>
using namespace std;

int search(int a[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int search_2d_5(int (*mat)[5], int nrows, int key, int &row, int &col) {
    row = -1;
    col = -1;
    for (int i = 0; i < nrows; ++i) {
        int idx = search(mat[i], 5, key);
        if (idx == -1) {
            continue;
        } else {
            row = i;
            col = idx;
            return 1;
        }
    }
    return 0;
}

/*
int main () {
	
    int arr[5] = {0, 1, 2, 3, 4};
    cout << search(arr, 5, 2) << endl;

    int mat[3][5] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}};
    int row, col;
    cout << search_2d_5(mat, 3, 14, row, col) << endl;
    cout << row << " " << col << endl;
	return 0;
}
*/