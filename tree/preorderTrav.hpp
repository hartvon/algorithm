#ifndef PREORDERTRAV_H
#define PREORDERTRAV_H

#include <vector>
#include <stack>
#include "util.hpp"

namespace preorder
{

void dfs(TreeNode* root, std::vector<int>& vec) {
    if (!root) return;
    vec.push_back(root->val);
    dfs(root->left, vec);
    dfs(root->right, vec);
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
        while (root) {
            ret.push_back(root->val);
            if (root->right) {
                stk.push(root->right);
            }
            root = root->left;
        }
        root = stk.top();
        stk.pop();
    }
    return ret;
}

// For iteration v2
std::vector<int> iteration2(TreeNode* root) {
    if (!root) return {};
    std::vector<int> ret;
    std::stack<TreeNode*> stk;
    stk.push(root);
    while (!stk.empty()) {
        root = stk.top();
        stk.pop();
        ret.push_back(root->val);
        if (root->right) {
            stk.push(root->right);
        }
        if (root->left) {
            stk.push(root->left);
        }
    }
    return ret;
}

} // namespace preorder

#endif  // PREORDERTRAV_H