#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <vector>

void selectionSort(std::vector<int>& nums) {
    int n = nums.size();
    for(int i = 0 ; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] < nums[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(nums[i], nums[minIdx]);
    }
}

#endif  // SELECTIONSORT_H
