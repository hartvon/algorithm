#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <vector>

void printVector(const std::vector<int>& nums) {
    for (auto &&i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void shuffle(std::vector<int>& nums) {
    for (int i = 0; i < nums.size()-1; ++i) {
        int j = i + rand() % (nums.size()-i);
        std::swap(nums[i], nums[j]);
    }
}

#endif  // UTIL_H