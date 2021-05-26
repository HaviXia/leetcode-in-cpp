
class Solution {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
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