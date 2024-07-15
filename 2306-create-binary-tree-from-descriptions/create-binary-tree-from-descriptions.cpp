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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int>s;
        for(auto it:descriptions){
            if(mp[it[0]]==NULL){
                mp[it[0]]=new TreeNode(it[0]);
            }
            if(mp[it[1]]==NULL){
                mp[it[1]]=new TreeNode(it[1]);
            }
            if(it[2]==1){
                    mp[it[0]]->left=mp[it[1]];
                }
                else{
                    mp[it[0]]->right=mp[it[1]];
                }
            
            s.insert(it[1]);    

        }
        int ans;
        for(auto it:descriptions){
            if(s.find(it[0])==s.end()){
                ans=it[0];
                break;
            }
        }
        return mp[ans];
    }
};