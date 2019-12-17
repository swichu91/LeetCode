//
// Created by Mateusz on 17.12.2019.
//

#include "RemoveLinkedListElements.h"


ListNode* RemoveLinkedListElements::Solution(ListNode *head, int val) {
    if(head == NULL){
        return head;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while(curr){

        next = curr->next;
        if(curr->val == val){
            if(prev) prev->next = next;
            if(curr == head) head = next;

            curr = next;
            continue;
        }

        prev = curr;
        curr = next;
    }
    return head;
}