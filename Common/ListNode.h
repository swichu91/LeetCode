//
// Created by Mateusz on 17.12.2019.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H

#include <stdint.h>
#include <stddef.h>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};


#endif //LEETCODE_LISTNODE_H
