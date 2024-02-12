class Solution {
public:
    int dp[101][101];
    int drunk(vector<vector<int>>&og ,int ind,int j,int ans){
        if(j<0 || ind<0 || j>=og[0].size() || ind>=og.size() || og[ind][j]==1){
            return 0;;
        }
        if(dp[ind][j]!=-1)return dp[ind][j];
        if(ind==og.size()-1 && j==og[0].size()-1) return 1;
        ans=drunk(og,ind+1,j,ans)+drunk(og,ind,j+1,ans);
        return dp[ind][j]=ans;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        memset(dp,-1,sizeof(dp));
        return drunk(og,0,0,0);
    }
};