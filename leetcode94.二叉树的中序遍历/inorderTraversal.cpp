//
// Created by Havi xia on 2021/5/19.
//

#include "inorderTraversal.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };


    // 递归 左子树——根节点——右子树  O(n)
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        inOrder(root, res);
        return res;
    }

    void inOrder(TreeNode *root, vector<int> &resVec) {
        if (!root) { // root == nullptr
            return;
        }
        inOrder(root->left, resVec);
        resVec.push_back(root->val);
        inOrder(root->right, resVec);
    }

    // 迭代；维护一个栈
public:
    vector<int> inoredrTraversal2(TreeNode *root) {
        vector<int> resVes;
        stack < TreeNode * > stk;
        while (root != nullptr || !stk.isEmpty()) {
            while (root != nullptr) {
                stk.push(root);
                root = root->left;
            }
            root = stk.top();
            skt.pop();
            res.push_back(root->val);
        }
        return resVec;
    }
};