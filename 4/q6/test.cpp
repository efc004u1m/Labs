// Include the header file with the definitions of the functions you create.
#include "problem_6.h"

// Include the test framework.
#include "test/catch.hpp"

TEST_CASE("Test 1") {
    int mat[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    REQUIRE(determinant(mat) == 0);
}
TEST_CASE("Test 2") {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    REQUIRE(determinant(mat) == 0);
}
TEST_CASE("Test 3") {
    int mat[3][3] = {{2, 3, 3}, {4, 5, 5}, {6, 7, 7}};
    REQUIRE(determinant(mat) == 0);
}
TEST_CASE("Test 4") {
    int mat[3][3] = {{1, 1, 1}, {5, 6, 7}, {8, 9, 100}};
    REQUIRE(determinant(mat) == 90);
}
TEST_CASE("Test 5") {
    int A[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int B[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int C[3][3] = {{0}};
    multiply(A, B, C);
    int res[3][3] = {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            REQUIRE(C[i][j] == res[i][j]);
        }
    }
}
TEST_CASE("Test 6") {
    int A[3][3] = {{1, 3, -10}, {5, 8, 9}, {0, 1, 13}};
    int B[3][3] = {{2, 4, -9}, {6, 7, 10}, {11, 12, 14}};
    int C[3][3] = {{0}};
    multiply(A, B, C);
    int res[3][3] = {{-90, -95, -119}, {157, 184, 161}, {149, 163, 192}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            REQUIRE(C[i][j] == res[i][j]);
        }
    }
}