class Solution {
public:
    int dp[51][51][51][51];
    int drunk(vector<vector<int>>&grid,int c1,int r1,int c2,int r2){
        int n = grid.size();
        if(r1 == n-1 && c1 == n-1 && r2 == n-1 && c2 == n-1) return grid[r1][c1];

        if(c1<0 || c2<0 || r1<0 || r2<0 || c1>=grid[0].size() || c2>=grid[0].size() || r1>=grid.size() ||r2>=grid.size() || grid[r1][c1]==-1 || grid[r2][c2]==-1){
            return INT_MIN;
        }
        if(dp[r1][c1][r2][c2]!=-1)return dp[r1][c1][r2][c2]; 
        int ans;
        if(c1==c2 && r1==r2){
            ans= grid[r1][c1]+max({drunk(grid,c1+1,r1,c2,r2+1),drunk(grid,c1+1,r1,c2+1,r2),drunk(grid,c1,r1+1,c2+1,r2),drunk(grid,c1,r1+1,c2,r2+1)});
        }
        else{
            ans=grid[r1][c1]+grid[r2][c2]+max({drunk(grid,c1+1,r1,c2,r2+1),drunk(grid,c1+1,r1,c2+1,r2),drunk(grid,c1,r1+1,c2+1,r2),drunk(grid,c1,r1+1,c2,r2+1)});
        }
        return dp[r1][c1][r2][c2]=ans;
        
    }
    int cherryPickup(vector<vector<int>>& grid){
     memset(dp,-1,sizeof(dp));
     int ans=drunk(grid,0,0,0,0);
     return ans<0?0:ans;   
    }
};