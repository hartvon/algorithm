#ifndef INORDER_H
#define INORDER_H

#include <vector>
#include <stack>
#include "util.hpp"

namespace inorder
{

void dfs(TreeNode* root, std::vector<int>& vec) {
    if (!root) return;
    dfs(root->left, vec);
    vec.push_back(root->val);
    dfs(root->right, vec);
}

// For recursion
std::vector<int> recursion(TreeNode* root) {
    std::vector<int> ret;
    dfs(root, ret);
    return ret;
}

// For iteration
std::vector<int> iteration(TreeNode* root) {
    std::vector<int> ret;
    std::stack<TreeNode*> stk;
    while (root || !stk.empty()) {
        while (root) {
            stk.push(root);
            root = root->left;
        }
        root = stk.top();
        stk.pop();
        ret.push_back(root->val);
        root = root->right;
    }
    return ret;
}

} // namespace inorder

#endif  // INORDER_H