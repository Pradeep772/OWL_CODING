class Solution {
public:
    int dp[10001];
    int drunk(int n){
        if(n<0)return 1e9;
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int cnt=0;
        int ans=INT_MAX;
        for(int i=1;i<sqrt(n)+1;i++){
            ans=min(ans,1+drunk(n-(i*i)));
            
        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return drunk(n);
    }
};