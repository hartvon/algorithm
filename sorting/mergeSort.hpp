#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

void merge(std::vector<int>& nums, int lo, int mid, int hi) {
    int m = mid - lo + 1;
    int n = hi - mid;
    int lArr[m] = {0};
    int rArr[n] = {0};
    for (int i = 0; i < m; ++i) {
        lArr[i] = nums[lo+i];
    }
    for (int j = 0; j < n; ++j) {
        rArr[j] = nums[mid+1+j];
    }
    int i = 0;
    int j = 0;
    int k = lo;
    while (i < m && j < n) {
        if (lArr[i] <= rArr[j]) {
            nums[k++] = lArr[i++];
        } else {
            nums[k++] = rArr[j++];
        }
    }
    while (i < m) {
        nums[k++] = lArr[i++];
    }
    while (j < n) {
        nums[k++] = rArr[j++];
    }
}

void mergeSort(std::vector<int>& nums) {
    int lo = 0, hi = nums.size() - 1;
    if (lo < hi) {
        int mid = lo + (hi - lo) / 1;
        mergeSort(nums, lo, mid);
        mergeSort(nums, mid + 1, hi);
        merge(nums, lo, mid, hi);
    }
}

#endif  // MERGESORT_H
