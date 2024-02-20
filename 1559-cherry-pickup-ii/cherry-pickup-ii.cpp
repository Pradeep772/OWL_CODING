class Solution {
public:
    int dp[101][101][101];
    int drunk(vector<vector<int>>&grid,int ind,int j1,int j2){
        if(ind >=grid.size() || j1<0 || j2<0 || j1>=grid[0].size() || j2>=grid[0].size() || j1==j2){
            return 0;
        }
        if(dp[ind][j1][j2]!=-1)return dp[ind][j1][j2]; 
       int ans=0;
       int cur=grid[ind][j1]+grid[ind][j2];
       int r1=drunk(grid,ind+1,j1,j2);
       int r2=drunk(grid,ind+1,j1,j2-1);
       int r3=drunk(grid,ind+1,j1,j2+1);
       int r4=drunk(grid,ind+1,j1+1,j2);
       int r5=drunk(grid,ind+1,j1+1,j2+1);
       int r6=drunk(grid,ind+1,j1+1,j2-1);
       int r7=drunk(grid,ind+1,j1-1,j2);
       int r8=drunk(grid,ind+1,j1-1,j2+1);
       int r9=drunk(grid,ind+1,j1-1,j2-1);
       ans=cur+max({r1,r2,r3,r4,r5,r6,r7,r8,r9});        
        return dp[ind][j1][j2]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return drunk(grid,0,0,grid[0].size()-1);
    }
};