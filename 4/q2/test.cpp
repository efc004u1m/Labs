// Include the header file with the definitions of the functions you create.
#include "problem_2.h"

// Include the test framework.
#include "test/catch.hpp"

// using Catch::Matchers::EndsWith;

TEST_CASE("Test 1") {
    char strings[1][5] = {"abcd"};
    int num = 1;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "abcd");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 2") {
    char strings[2][5] = {"abcd", "uuuu"};
    int num = 2;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "uuuu");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 3") {
    char strings[2][5] = {"aaaa", "abcd"};
    int num = 2;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aaaa");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 4") {
    char strings[3][5] = {"aaaa", "eeee", "iiii"};
    int num = 3;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aaaa");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 5") {
    char strings[3][5] = {"abcd", "aacd", "aaad"};
    int num = 3;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aaad");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 6") {
    char strings[4][5] = {"abcd", "eeee", "aaad", "aacd"};
    int num = 4;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "eeee");
    REQUIRE(ans == 0);
}


TEST_CASE("Test 7") {
    char strings[5][5] = {"cdff", "cdfg", "cdfj", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "cdff");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 8") {
    char strings[5][5] = {"cdff", "cdfg", "ajjj", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "ajjj");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 9") {
    char strings[5][5] = {"cdff", "aojj", "ajjj", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aojj");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 10") {
    char strings[5][5] = {"aoij", "cdfg", "ajjj", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aoij");
    REQUIRE(ans == 0);
}


