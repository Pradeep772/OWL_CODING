class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l1=INT_MAX,l2=INT_MIN,b1=INT_MAX,b2=INT_MIN;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    l1=min(l1,i);
                    l2=max(l2,i);
                    b1=min(b1,j);
                    b2=max(b2,j);
                }
            }
        }
        int l=abs(l1-l2)+1;
        int b=abs(b1-b2)+1;
        //int ans=l*b;
        //cout<<l<<" "<<b<<endl;
        return l*b;
    }
};