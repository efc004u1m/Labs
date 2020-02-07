// Include the header file with the definitions of the functions you create.
#include "problem_1.h"

// Include the test framework.
#include "test/catch.hpp"

// Declares a single test.
TEST_CASE("Test Case 1")
{
	int a = 1;
	int b = 2;
	swap(a, b);
	REQUIRE(a == 2);
	REQUIRE(b == 1);
}

TEST_CASE("Test Case 2")
{
	int a = 10;
	int b = 20;
	swap(a, b);
	REQUIRE(a == 20);
	REQUIRE(b == 10);
}