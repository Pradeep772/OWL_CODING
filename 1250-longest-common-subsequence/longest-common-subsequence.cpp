class Solution {
public:
    int L(int a,int b,int n,int m,string &t1,string &t2,vector<vector<int>>&dp){
        if(a<0 || b<0)return 0;
        if(dp[a][b]!=-1)return dp[a][b];
        if(t1[a]==t2[b])return dp[a][b]=1+L(a-1,b-1,n,m,t1,t2,dp);
        int left=L(a,b-1,n,m,t1,t2,dp);
        int up=L(a-1,b,n,m,t1,t2,dp);
        return dp[a][b]=max(left,up);

    }
    int longestCommonSubsequence(string t1, string t2) {
        int n=t1.size(),m=t2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return L(n-1,m-1,n,m,t1,t2,dp);
        
    }
};