class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        int n=m.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                if(j-1>=0){
                    a=m[i+1][j-1];
                }
                b=m[i+1][j];
                if(j+1<n){
                    c=m[i+1][j+1];
                }
                m[i][j]+=min({a,b,c});
            }
        }
        return *min_element(m[0].begin(),m[0].end());
    }
};