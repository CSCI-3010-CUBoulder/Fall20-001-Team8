#define CATCH_CONFIG_MAIN
#include "catch.hpp"
<<<<<<< HEAD

=======
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

TEST_CASE ("Sum of elements in std vector", "[Sum]") {
    std::vector<double> nums_one {1., 2., 3., 4., 5., 0.4};
    std::vector<double> nums_two {2.3, 4.5, 21.6, 312.32, 33321.1};

    REQUIRE(Sum(nums_one) == 15.4);
    REQUIRE(Sum(nums_two) == 33661.82);
}
>>>>>>> 1033b981b45efb622c4ce328cd5d08daa41b455f
