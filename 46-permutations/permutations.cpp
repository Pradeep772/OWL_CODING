class Solution {
public:
    void fun(vector<int>&n,vector<vector<int>>&ans,int ind){
        if(ind==n.size()){
            ans.push_back(n);
            return;
        }
        for(int i=ind;i<n.size();i++){
            swap(n[i],n[ind]);
            fun(n,ans,ind+1);
            swap(n[i],n[ind]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>>ans;
     fun(nums,ans,0);
     return ans;   
    }
};