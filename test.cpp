#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
#include <algorithm>

TEST_CASE ("SubtractN for ints", "[subN]") {
    std::vector<int> v{3,5,7,9};
    int n = 3;
    std::vector<int> result_v = SubtractN(v, n);

    srand(time(0));
    int rand_ind = rand() % v.size();

    REQUIRE(result_v.size() == 4);
    REQUIRE(result_v[0] == 0);
    REQUIRE(result_v[rand_ind] == v[rand_ind] - n);
};

TEST_CASE ("Factorials for ints", "[Factorial]") {
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(5) == 120);
    REQUIRE(Factorial(9) == 362880);
    REQUIRE(Factorial(11) == 39916800);
}