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
    void dfs(TreeNode *a,vector<int>&v){
        if(!a)return;
        if(!a->left && !a->right){
            v.push_back(a->val);
        }
        else{
            dfs(a->left,v);
            dfs(a->right,v);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        dfs(root1,v1);
        dfs(root2,v2);
        if(v1==v2){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};