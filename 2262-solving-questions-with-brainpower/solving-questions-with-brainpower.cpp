class Solution {
public:
    long long Rabbit(int i,vector<vector<int>>& q,vector<long long> &dp){
        if(i>=q.size())return 0;
        if(dp[i]!=-1)return dp[i];
        long long pick=Rabbit(i+q[i][1]+1,q,dp)+(long long)q[i][0];
        long long unpick=Rabbit(i+1,q,dp);
        return dp[i]=max(pick,unpick);
    }
    long long mostPoints(vector<vector<int>>& q) {
        int n=q.size();
        vector<long long>dp(n,-1);
        return Rabbit(0,q,dp);
        
    }
};