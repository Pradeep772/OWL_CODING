class Solution {
public:
    bool fun(vector<vector<int>>v){
        int r1=v[0][0]+v[0][1]+v[0][2];
        int r2=v[1][0]+v[1][1]+v[1][2];
        int r3=v[2][0]+v[2][1]+v[2][2];
        int c1=v[0][0]+v[1][0]+v[2][0];
        int c2=v[0][1]+v[1][1]+v[2][1];
        int c3=v[0][2]+v[1][2]+v[2][2];
        int d1=v[0][0]+v[1][1]+v[2][2];
        int d2=v[0][2]+v[1][1]+v[2][0];
        if(r1==r2 && r2==r3 && r3==c1 && c1==c2 && c2==c3 && c3==d1 && d1==d2){
            return 1;
    
        }
        else{
            return 0;
        }

    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3 || grid[0].size()<3){
            return 0;
        }
        int sum=0;
        for(int i=0;i<=grid.size()-3;i++){
            for(int j=0;j<=grid[0].size()-3;j++){
                vector<vector<int>>v(3,vector<int>(3));
                bool f=0;
                vector<bool>vis(10);
                for(int ii=0;ii<3;ii++){
                    for(int jj=0;jj<3;jj++){
                        v[ii][jj]=grid[ii+i][jj+j];
                        if(grid[ii+i][jj+j]<10 && grid[ii+i][jj+j]>0 && vis[grid[ii+i][jj+j]-1]!=1){
                            vis[grid[ii+i][jj+j]-1]=1;
                        }
                        else{
                            f=1;
                            break;
                        }
                    }
                }
                if(!f && fun(v)){
                    sum++;
                }
            }
        }
        return sum;
    }
};