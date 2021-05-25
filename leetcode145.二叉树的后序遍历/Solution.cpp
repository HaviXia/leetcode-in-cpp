
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        postorder(root, res);
        return res;
    }

    void preOrder(TreeNode *root, vector<int> list) {
        if (root == nullptr) { // root == nullptr
            return;
        }
        postorder(root->left, list);
        postorder(root->right, list);
        list.push_back(root->val);
    }
};