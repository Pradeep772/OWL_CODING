class Solution {
public:
    int dp[51][51][51];
    const int mod = 1e9 + 7;
    int dfs(int r,int c,int n,int m,int k){
        if(r < 0 || c < 0 || r == n || c == m)return 1;
        if(k <= 0)return 0;
        if(dp[r][c][k] != -1)return dp[r][c][k];
        int x = dfs(r,c-1,n,m,k-1)%mod;
        int y = dfs(r,c+1,n,m,k-1)%mod;
        int z = dfs(r+1,c,n,m,k-1)%mod;
        int a = dfs(r-1,c,n,m,k-1)%mod;
        return dp[r][c][k] = ((x + y)%mod + (z + a)%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return dfs(startRow,startColumn,m,n,maxMove);
    }
};