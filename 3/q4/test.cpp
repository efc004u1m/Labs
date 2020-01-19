// Include the header file with the definitions of the functions you create.
#include "reverse.h"

// Include the test framework.
#include "test/catch.hpp"
using Catch::Matchers::Equals;
// Declares a single test.
TEST_CASE("test_1")
{
	char s[6] = "abcde";
	reverseString(s);
	REQUIRE_THAT(s, Equals("edcba"));
}

TEST_CASE("test_2")
{
	char s[2] = "a";
	reverseString(s);
	REQUIRE_THAT(s, Equals("a"));
}

TEST_CASE("test_3")
{
	char s[5] = "abcd";
	reverseString(s);
	REQUIRE_THAT(s, Equals("dcba"));
}

TEST_CASE("test_4")
{
	char s[4] = "aaa";
	reverseString(s);
	REQUIRE_THAT(s, Equals("aaa"));
}

TEST_CASE("test_5")
{
	char s[5] = "aaaa";
	reverseString(s);
	REQUIRE_THAT(s, Equals("aaaa"));
}