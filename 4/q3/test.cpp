// Include the header file with the definitions of the functions you create.
#include "problem_3.h"

// Include the test framework.
#include "test/catch.hpp"

TEST_CASE("Test 1") {
    char* strings[1] = {"abc"};
    int num = 1;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "abc");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 2") {
    char *strings[2] = {"aaaaaaaaaaaaaaaa", "uuuu"};
    int num = 2;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aaaaaaaaaaaaaaaa");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 3") {
    char *strings[2] = {"aeiou", "aaaaa"};
    int num = 2;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aeiou");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 4") {
    char *strings[3] = {"aeiou", "aeiouaeiou", "iouae"};
    int num = 3;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aeiouaeiou");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 5") {
    char *strings[3] = {"aeioa", "aeioaa", "aeioaaa"};
    int num = 3;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aeioaaa");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 6") {
    char *strings[4] = {"abcddddddd", "eiouqwrttttttttt", "aaadqwrttttttttt", "aacdqwrttttttttt"};
    int num = 4;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "eiouqwrttttttttt");
    REQUIRE(ans == 0);
}


TEST_CASE("Test 7") {
    char *strings[5] = {"aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 8") {
    char *strings[5] = {"cdff", "cdfg", "ajjj", "cdcd", "ffff"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "ajjj");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 9") {
    char *strings[5] = {"a", "e", "i", "o", "u"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "a");
    REQUIRE(ans == 0);
}

TEST_CASE("Test 10") {
    char *strings[5] = {"d", "i", "o", "e", "a"};
    int num = 5;
    char* res = string_with_max_vowels(strings, num);
    bool ans = strcmp(res, "i");
    REQUIRE(ans == 0);
}


