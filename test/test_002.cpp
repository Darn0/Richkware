// 010-TestCase.cpp

// Let Catch provide main():
#define CATCH_CONFIG_MAIN
#include "include/catch2/catch.hpp"

TEST_CASE( "stupid/1=2", "Prove that one equals 2" ){
int one = 1;
REQUIRE( one == 2 );
}