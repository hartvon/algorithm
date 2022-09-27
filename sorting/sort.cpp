#include "bubbleSort.hpp"
#include "insertionSort.hpp"
#include "selectionSort.hpp"
#include "quickSort.hpp"
#include "heapSort.hpp"
#include "mergeSort.hpp"
#include "util.hpp"

int main(int argc, char** argv)
{
    std::cout << "Please enter the array to be sorted:" << std::endl;
    std::vector<int> nums;
    int val;
    while (std::cin >> val) {
        nums.push_back(val);
    }
    // Test sort algorithm here.
    bubbleSort(nums);     printVector(nums);  shuffle(nums);  
    insertionSort(nums);  printVector(nums);  shuffle(nums);
    selectionSort(nums);  printVector(nums);  shuffle(nums);
    heapSort(nums);       printVector(nums);  shuffle(nums);
    quickSort(nums, 0, nums.size()-1);  printVector(nums);  shuffle(nums);
    mergeSort(nums, 0, nums.size()-1);  printVector(nums);

    return 0;
}
