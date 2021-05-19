//
// Created by Havi xia on 2021/5/19.
//

#include "Solution.h"

class Solution {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    // dfs
public:
    bool result = true;

    bool isSymmetric(TreeNode *root) {
        if (!root) {
            return true;
        }
        dfs(root->left, root->right);
        return result;
    }

    void dfs(TreeNode *left, TreeNode *right) {
        if (!result || (!left && !right)) return;
        else if (!left || !right) {
            result = false;
        } else if (left->val == right->val) {
            dfs(left->left, right->right);
            dfs(left->right, right->left);
        } else {
            result = false;
        }
    }

    // 递归
    bool isSymmetric1(TreeNode *root) {
        return solution(root->left, root->right);
    }

    bool solution(TreeNode *left, TreeNode *right) {
        if (!left && !right) {
            return true;
        }
        if (!left || !right) {
            return false;
        }
        return left->val == right->val && solution(left->left, right->right) && solution(left->right, right->left);
    }
};