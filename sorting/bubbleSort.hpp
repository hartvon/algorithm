#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>

void bubbleSort(std::vector<int>& nums, int n) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < n; ++i) {
            if (nums[i-1] > nums[i]) {
                std::swap(nums[i-1], nums[i]);
                sorted = false;
            }
        }
    }
}

#endif  // BUBBLESORT_H
