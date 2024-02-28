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
public:
    pair<int, int> bottomLeftValue(TreeNode* root, int depth) {
        if (!root) return {-1, -1}; 
        pair<int, int> leftResult = bottomLeftValue(root->left, depth + 1);
        pair<int, int> rightResult = bottomLeftValue(root->right, depth + 1);
        if (leftResult.first == -1 && rightResult.first == -1) {
            return {depth, root->val};
        }
        
        if (leftResult.first >= rightResult.first) {
            return leftResult;
        } else {
            return rightResult;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        return bottomLeftValue(root, 0).second;
    }
};