#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>

void heapify(std::vector<int>& nums, int i, int n) {
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
        heapify(nums, largest, n);
    }
}

void heapSort(std::vector<int>& nums) {
    int n = nums.size();
    for (int i = n/2-1; i >= 0; --i) {
        heapify(nums, i, n);
    }
    for (int i = n-1; i >= 0; --i) {
        std::swap(nums[i], nums[0]);
        heapify(nums, 0, i);
    }
}

#endif  // HEAPSORT_H
