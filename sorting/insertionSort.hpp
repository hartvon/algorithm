#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>

void insertionSort(std::vector<int>& nums, int n) {
    for (int i = 1; i < n; ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j+1] = nums[j];
            --j;
        }
        nums[j+1] = key;
    }
}

#endif  // INSERTIONSORT_H