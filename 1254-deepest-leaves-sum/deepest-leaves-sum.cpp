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
    int fun(TreeNode* root ,int le,int cl){
        if(!root)return 0;
        if(le==cl && !root->left && !root->right)return root->val;
        int ans=fun(root->left,le,cl+1)+fun(root->right,le,cl+1);
        return ans;
    }
    int drunk(TreeNode* root){
        if(!root)return 0;
        int l=1+drunk(root->left);
        int r=1+drunk(root->right);
        return max(r,l);
    }
    int deepestLeavesSum(TreeNode* root) {
        int l=drunk(root);
        return fun(root,l,1);
    }
};