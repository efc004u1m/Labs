// Include the header file with the definitions of the functions you create.
#include "problem_5.h"

// Include the test framework.
#include "test/catch.hpp"

void myswap(char*& c1, char*& c2) {
    char* temp = c1;
    c1 = c2;
    c2 = temp;
}
void myswap2(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void sort_names_true(int entry[], char* names[], int num) {
    for (int i = 0; i < num - 1; ++i) {
        for (int j = 0; j < num - 1; ++j) {
            if (entry[j] > entry[j + 1]) {
                myswap2(entry[j], entry[j + 1]);
                myswap(names[j], names[j + 1]);
            }
        }
    }
}

TEST_CASE("Test 1") {
    int entry[1] = {3};
    char* names[1] = {"aaa"};
    int num = 1;
    sort_names(entry, names, num);

    bool res = strcmp(names[0], "aaa");
    REQUIRE(res == 0);
    REQUIRE(entry[0] == 3);
}

TEST_CASE("Test 2") {
    int entry[2] = {3, 2};
    char* names[2] = {"aaa", "abb"};

    int entry2[2] = {3, 2};
    char* names2[2] = {"aaa", "abb"};
    int num = 2;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        // std::cout << names[i] << " ";
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 3") {
    int entry[3] = {3, 2, 1};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {3, 2, 1};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 4") {
    int entry[3] = {3, 1, 2};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {3, 1, 2};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 5") {
    int entry[3] = {1, 2, 3};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {1, 2, 3};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 6") {
    int entry[3] = {1, 3, 2};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {1, 3, 2};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}


TEST_CASE("Test 7") {
    int entry[3] = {2, 1, 3};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {2, 1, 3};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 8") {
    int entry[3] = {2, 3, 1};
    char* names[3] = {"aaa", "abb", "ccc"};

    int entry2[3] = {2, 3, 1};
    char* names2[3] = {"aaa", "abb", "ccc"};
    int num = 3;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 9") {
    int entry[8] = {1, 3, 4, 5, 10, 2, 8, 7};
    char* names[8] = {"aaa", "abb", "ccc", "aafqe", "afhf", "afuai", "rgweggwgwg", "sfiwefwfwfwf"};
    
    int entry2[8] = {1, 3, 4, 5, 10, 2, 8, 7};
    char* names2[8] = {"aaa", "abb", "ccc", "aafqe", "afhf", "afuai", "rgweggwgwg", "sfiwefwfwfwf"};
    int num = 8;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}

TEST_CASE("Test 10") {
    int entry[12] = {1, 3, 4, 5, 10, 2, 8, 7, 11, 12, 13, 15};
    char* names[12] = {"aaa", "abb", "ccc", "aafqe", "aa", "aaa", "aaaa", "aaaaa", "afhf", "afuai", "rgweggwgwg", "sfiwefwfwfwf"};
    
    int entry2[12] = {1, 3, 4, 5, 10, 2, 8, 7, 11, 12, 13, 15};
    char* names2[12] = {"aaa", "abb", "ccc", "aafqe", "aa", "aaa", "aaaa", "aaaaa", "afhf", "afuai", "rgweggwgwg", "sfiwefwfwfwf"};
    int num = 8;
    sort_names(entry, names, num);
    sort_names_true(entry2, names2, num);

    for (int i = 0; i < num; ++i) {
        REQUIRE(strcmp(names[i], names2[i]) == 0);
        REQUIRE(entry[i] == entry2[i]);
    }
}
