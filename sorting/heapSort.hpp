#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>

void heapify(std::vector<int>& nums, int n, int i) {
    int largest = i;
    int lc = 2 * i + 1;
    int rc = 2 * i + 2;
    if (lc < n && nums[lc] > nums[largest]) {
        largest = lc;
    }
    if (rc < n && nums[rc] > nums[largest]) {
        largest = rc;
    }
    if (largest != i) {
        std::swap(nums[largest], nums[i]);
        heapify(nums, n, largest);
    }
}

void heapSort(std::vector<int>& nums) {
    int lo = 0, hi = nums.size() - 1;
    for (int i = hi; i >= lo; --i) {
        heapify(nums, hi, i);
    }
    for (int i = hi; i >= lo; --i) {
        std::swap(nums[lo], nums[i]);
        heapify(nums, i, lo);
    }
}

#endif  // HEAPSORT_H
