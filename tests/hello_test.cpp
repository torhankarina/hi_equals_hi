#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "Case-insensitive string comparison") {
    REQUIRE( strcmp_case_insensitive("String one", "string two") < 0 );
    REQUIRE( strcmp_case_insensitive("String one", "string one") == 0 );
    REQUIRE( strcmp_case_insensitive("String two", "string one") > 0);
    REQUIRE( strcmp_case_insensitive("abc", "ABC") == 0 );
    REQUIRE( strcmp_case_insensitive("aBcDeF", "AbCdEf") == 0 );
    REQUIRE( strcmp_case_insensitive("", "") == 0 );
    REQUIRE( strcmp_case_insensitive("a", "A") == 0 );
    REQUIRE( strcmp_case_insensitive("abc", "abcd") < 0 );
    REQUIRE( strcmp_case_insensitive("abcd", "abd") < 0 );
    REQUIRE( strcmp_case_insensitive("abc", "abD") < 0 );
}
