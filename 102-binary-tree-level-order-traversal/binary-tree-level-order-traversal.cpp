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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
       if(root==NULL)return ans;
       queue<TreeNode*>que;
       que.push(root);
       while(!que.empty()){
        vector<int>level;
        int siz=que.size();
        for(int i=0;i<siz;i++){
            TreeNode* le=que.front();
            que.pop();
            if(le->left!=NULL){
                que.push(le->left);
            }
            if(le->right!=NULL){
                que.push(le->right);
            }
            level.push_back(le->val);
        }
        ans.push_back(level);
       }
       return ans;
    }
};