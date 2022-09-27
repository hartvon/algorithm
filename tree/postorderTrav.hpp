#ifndef POSTORDERTRAV_H
#define POSTORDERTRAV_H

#include <vector>
#include <stack>
#include <algorithm>
#include "util.hpp"

namespace postorder
{

void dfs(TreeNode* root, std::vector<int>& vec) {
    if (!root) return;
    dfs(root->left, vec);
    dfs(root->right, vec);
    vec.push_back(root->val);
}

// For recursion
std::vector<int> recursion(TreeNode* root) {
    std::vector<int> ret;
    dfs(root, ret);
    return ret;
}

// For iteration v1
std::vector<int> iteration1(TreeNode* root) {
    if (!root) return {};
    std::vector<int> ret;
    std::stack<TreeNode*> stk;
    stk.push(root);
    while (!stk.empty()) {
        root = stk.top();
        stk.pop();
        ret.push_back(root->val);
        if (root->left) {
            stk.push(root->left);
        }
        if (root->right) {
            stk.push(root->right);
        }
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
}

// For iteration v2
std::vector<int> iteration2(TreeNode* root) {
    if (!root) return {};
    std::vector<int> ret;
    std::stack<TreeNode*> stk;
    stk.push(root);
    TreeNode* prev = nullptr;
    while (root || !stk.empty()) {
        while (root) {
            stk.push(root);
            root = root->left;
        }
        root = stk.top();
        stk.pop();
        if (!root->right || root->right == prev) {
            ret.push_back(root->val);
            prev = root;
            root = nullptr;
        } else {
            stk.push(root);
            root = root->right;
        }
    }
    return ret;
}

} // namespace postorder

#endif  // POSTORDERTRAV_H