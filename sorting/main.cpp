#include <iostream>
#include "bubbleSort.hpp"
#include "insertionSort.hpp"
#include "selectionSort.hpp"
#include "quickSort.hpp"
#include "heapSort.hpp"
#include "mergeSort.hpp"


int main(int argc, char** argv)
{
    std::vector<int> nums{5, 2, -1, 0, 3};
    // Test sort algorithm here.
    mergeSort(nums);
    
    for (auto &&i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
