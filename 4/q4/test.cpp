// Include the header file with the definitions of the functions you create.
#include "problem_4.h"

// Include the test framework.
#include "test/catch.hpp"

TEST_CASE("Test 1") {
    int mat[1][5] = {{0, 1, 2, 3, 4}};
    int nrows = 1;
    int key = 4;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 0);
    REQUIRE(col == 4);
}

TEST_CASE("Test 2") {
    int mat[2][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5}};
    int nrows = 2;
    int key = 10;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 0);
    REQUIRE(row == -1);
    REQUIRE(col == -1);
}

TEST_CASE("Test 3") {
    int mat[2][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5}};
    int nrows = 2;
    int key = 0;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 0);
    REQUIRE(col == 0);
}

TEST_CASE("Test 3_2") {
    int mat[2][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 66, 5}};
    int nrows = 2;
    int key = 66;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 1);
    REQUIRE(col == 3);
}

TEST_CASE("Test 4") {
    int mat[2][5] = {{0, 1, 2, 3, 4},
                     {88, 2, 2, 4, 5}};
    int nrows = 2;
    int key = 88;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 1);
    REQUIRE(col == 0);
}

TEST_CASE("Test 5") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 60;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 0);
    REQUIRE(row == -1);
    REQUIRE(col == -1);
}

TEST_CASE("Test 6") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 35;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 0);
    REQUIRE(row == -1);
    REQUIRE(col == -1);
}

TEST_CASE("Test 7") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 99;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 0);
    REQUIRE(row == -1);
    REQUIRE(col == -1);
}

TEST_CASE("Test 8") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 20;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 2);
    REQUIRE(col == 1);
}

TEST_CASE("Test 9") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 40;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 2);
    REQUIRE(col == 3);
}

TEST_CASE("Test 10") {
    int mat[3][5] = {{0, 1, 2, 3, 4},
                     {1, 2, 3, 4, 5},
                     {10, 20, 30, 40, 50}};
    int nrows = 3;
    int key = 50;
    int row, col;
    int res = search_2d_5(mat, nrows, key, row, col);
    REQUIRE(res == 1);
    REQUIRE(row == 2);
    REQUIRE(col == 4);
}