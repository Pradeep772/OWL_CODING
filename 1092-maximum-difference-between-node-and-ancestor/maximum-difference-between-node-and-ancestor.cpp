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
    int ans=0;
    pair<int,int>dfs(TreeNode* root){
        if(!root)return {-1,-1};
        if(!root->left && !root->right)return {root->val,root->val};
        auto [l1,r1]=dfs(root->left);
        auto [l2,r2]=dfs(root->right);
        if(!root->left){
           ans=max({ans,abs(root->val-min({l2,r2})),abs(root->val-max({l2,r2}))});
            return {min({root->val,l2,r2}),max({root->val,r2,l2})};
        }
        if(!root->right){
            ans=max({ans,abs(root->val-min({l1,r1})),abs(root->val-max({l1,r1}))});
            return {min({root->val,l1,r1}),max({root->val,r1,l1})};
        }
        int mn=min({l1,l2,r1,r2,root->val}),ma=max({l1,l2,r1,r2,root->val});
        ans= max({ans,abs(root->val-mn),abs(root->val-ma)});
        // mn = min(mn,);
        // ma = max(ma,root->val);
        return {mn,ma};

    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root);
        return ans;
        
    }
};