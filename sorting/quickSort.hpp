#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

int partition(std::vector<int>& nums, int lo, int hi) {
    int pivot = nums[hi];
    for (int i = lo; i < hi; ++i) {
        if (nums[i] < pivot) {
            std::swap(nums[i], nums[lo++]);
        }
    }
    // 此时的nums[lo]是第一个大于pivot（nums[hi]）的数
    std::swap(nums[lo], nums[hi]);
    return lo;
}

void quickSort(std::vector<int>& nums, int lo, int hi) {
    if (lo < hi) {
        int mid = partition(nums, lo, hi);
        quickSort(nums, lo, mid - 1);
        quickSort(nums, mid + 1, hi);
    }
}


#endif  // QUICKSORT_H
