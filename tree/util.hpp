#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
#include <sstream>
#include <vector>

// Definition of Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int _v = 0,
             TreeNode* _l = nullptr,
             TreeNode* _r = nullptr)
        : val(_v), left(_l), right(_r) {}
};

TreeNode* buildTree(std::vector<int>& nums, int i, int n) {
    TreeNode* root = nullptr;
    if (i < n) {
        root = new TreeNode(nums[i]);
        root->left = buildTree(nums, 2*i+1, n);
        root->right = buildTree(nums, 2*i+2, n);
    }
    return root;
}

void printVector(const std::vector<int>& nums) {
    for (auto &&i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

#endif  // TREENODE_H