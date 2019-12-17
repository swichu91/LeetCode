//
// Created by Mateusz on 17.12.2019.
//

#include "catch.hpp"

#include "RemoveDuplicatesFromSortedArray.h"

TEST_CASE( "RemoveDuplicatesFromSortedArray" ) {
    std::vector<int> test1{0,0,1,1,1,2,2,3,3,4};
    REQUIRE( RemoveDuplicatesFromSortedArray::Solution(test1) == 5 );
}