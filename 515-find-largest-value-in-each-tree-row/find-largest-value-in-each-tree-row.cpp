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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int m=INT_MIN;
            for(int i=0;i<s;i++){
                TreeNode* r=q.front();
                q.pop();
                if(r->left!=NULL)q.push(r->left);
                if(r->right!=NULL)q.push(r->right);
                m=max(m,r->val);
            }
            ans.push_back(m);
        }
        return ans;

        }
};