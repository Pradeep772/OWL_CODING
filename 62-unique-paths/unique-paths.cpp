class Solution {
public:
    int dp[101][101];
    int drunk(int m,int n,int i,int j,int ans){
        if(i<0 || j<0 || i==m || j==n)return 0;
        if(i==m-1 && j==n-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        ans=drunk(m,n,i+1,j,ans)+drunk(m,n,i,j+1,ans);
        return dp[i][j]=ans;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
     return drunk(m,n,0,0,0);   
    }
};