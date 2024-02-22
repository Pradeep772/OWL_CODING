class Solution {
public:
    
    int dp[50001];
    bool drunk(vector<int>&arr ,int ind,vector<bool>& vis){
        if(ind<0 || ind>=arr.size())return 0;
        if(arr[ind]==0)return 1;
        if(dp[ind]!=-1)return dp[ind]; 
        if(vis[ind]==1)return 0;
        vis[ind]=1;
        bool left=drunk(arr,ind-arr[ind],vis);
        bool right=drunk(arr,ind+arr[ind],vis);
        vis[ind]=0;
        return dp[ind]=left||right;
    }
    bool canReach(vector<int>& arr, int start) {
        memset(dp,-1,sizeof(dp));
        vector<bool>vis(arr.size()-1);
        return drunk(arr,start,vis);
    }
};