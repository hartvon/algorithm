#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <vector>

void selectionSort(std::vector<int>& nums) {
    for(int i = 0 ; i < nums.size() - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[j] < nums[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(nums[i], nums[minIdx]);
    }
}

#endif  // SELECTIONSORT_H
