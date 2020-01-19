// Include the header file with the definitions of the functions you create.
#include "pointer.h"

// Include the test framework.
#include "test/catch.hpp"

// Declares a single test.
TEST_CASE("array = [100]")
{
	int arr[1] = {100};
	REQUIRE(sum_array(arr, 1) == 100);
}

TEST_CASE("array = [100, 200]")
{
	int arr[2] = {100, 200};
	REQUIRE(sum_array(arr, 2) == 300);
}

TEST_CASE("array is empty")
{
	int *arr = NULL;
	REQUIRE(sum_array(arr, 0) == 0);
}

TEST_CASE("multiple arrays")
{
	int arr[5] = {1, 2, 3, 4, 5};
	REQUIRE(sum_array(arr, 5) == 15);
	REQUIRE(sum_array(arr, 4) == 10);
	REQUIRE(sum_array(arr, 3) == 6);
	REQUIRE(sum_array(arr, 2) == 3);
	REQUIRE(sum_array(arr, 1) == 1);

}
