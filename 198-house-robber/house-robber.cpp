class Solution {
public:
    int Rabbit(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int right=Rabbit(i+2,nums,dp)+nums[i];
        int left=Rabbit(i+1,nums,dp);
        return dp[i]=max(right,left);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return Rabbit(0,nums,dp);
        
    }
};