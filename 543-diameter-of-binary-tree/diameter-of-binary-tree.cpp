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

    int drunk(TreeNode* root,int &ans){
        if(!root)return 0;
        int left=drunk(root->left,ans);
        int right=drunk(root->right,ans);
        ans=max(ans,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        drunk(root,ans);
        return ans;
    }
};