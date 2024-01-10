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
    pair<int,bool> dfs(TreeNode *root,int s){
     
     if(!root)return {0,0};
     if(root->val==s){
         pair<int,bool> l = dfs(root->left,s);
         pair<int,bool> r = dfs(root->right,s);
         ans=max(l.first,r.first);
         return {0,1};
     }
     pair<int,bool> lde=dfs(root->left,s);
     pair<int,bool> rde=dfs(root->right,s);
     if(lde.second || rde.second){
         ans=max(ans,lde.first+rde.first+1);
         if(lde.second){
             return{lde.first+1,1};
         }
         else{
             return {rde.first+1,1};
         }
     }
        return {max(rde.first,lde.first)+1,0};
    } 
    int amountOfTime(TreeNode* root, int start) {
        dfs(root,start);
        return ans;        
    }
};