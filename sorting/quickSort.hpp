#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

int partition(std::vector<int>& nums, int lo, int hi) {
    int pivot = nums[hi];
    int i = lo;
    for (int j = lo; j < hi; ++j) {
        if (nums[j] < pivot) {
            std::swap(nums[i++], nums[j]);
        }
    }
    // 此时的nums[i]是第一个大于pivot（nums[hi]）的数
    // 交换后使得nums[hi]成为中位数
    std::swap(nums[i], nums[hi]);
    return i;
}

void quickSort(std::vector<int>& nums) {
    int lo = 0, hi = nums.size() - 1;
    if (lo < hi) {
        int mid = partition(nums, lo, hi);
        quickSort(nums, lo, mid - 1);
        quickSort(nums, mid + 1, hi);
    }
}

#endif  // QUICKSORT_H
