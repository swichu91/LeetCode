//
// Created by Mateusz on 17.12.2019.
//

#include "catch.hpp"

#include "RemoveLinkedListElements.h"

TEST_CASE( "RemoveLinkedListElements" ) {
    ListNode node1_1(2);
    ListNode node1_2(4);
    ListNode node1_3(3);
    node1_1.next = &node1_2;
    node1_2.next = &node1_3;

    RemoveLinkedListElements::Solution(&node1_1,4);
}