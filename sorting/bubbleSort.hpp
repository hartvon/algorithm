#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>

void bubbleSort(std::vector<int>& strs, int n) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < n; ++i) {
            if (strs[i-1] + strs[i] > strs[i] + strs[i-1]) {
                std::swap(strs[i-1], strs[i]);
                sorted = false;
            }
        }
    }
}

#endif  // BUBBLESORT_H