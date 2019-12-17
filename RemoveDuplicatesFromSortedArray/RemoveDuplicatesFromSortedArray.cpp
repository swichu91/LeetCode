//
// Created by Mateusz on 17.12.2019.
//

#include "RemoveDuplicatesFromSortedArray.h"
#include <stdint.h>

int RemoveDuplicatesFromSortedArray::Solution(std::vector<int> &nums) {
    if(nums.size() == 0 || nums.size() == 1){
        return nums.size();
    }

    uint32_t newSize = 0;
    uint32_t uniqueElement = 0;
    for(uint32_t i =1; i< nums.size()-1;++i){

        if(nums[i] != nums[i+1]){
            uniqueElement++;
            nums[uniqueElement] = nums[i+1];
        }
    }
    return uniqueElement+1;
}