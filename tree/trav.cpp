#include "preorderTrav.hpp"
#include "inorderTrav.hpp"
#include "postorderTrav.hpp"
#include "util.hpp"

int main(int argc, char const *argv[])
{
/**************
         1 
        / \
       2    3
      / \  / \
     4  5  6  *
***************/
    std::vector<int> nums{1, 2, 3, 4, 5, 6};
    TreeNode* root = buildTree(nums, 0, nums.size());
    printVector(preorder::recursion(root));
    printVector(inorder::recursion(root));
    printVector(postorder::recursion(root));

    return 0;
}
