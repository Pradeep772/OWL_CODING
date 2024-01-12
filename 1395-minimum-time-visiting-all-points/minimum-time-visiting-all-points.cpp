class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int c=0;
        for(int i=1;i<p.size();i++){
            c+=max({(abs(p[i-1][0]-p[i][0])),abs((p[i-1][1]-p[i][1]))});
        }
        return c;
        
    }
};