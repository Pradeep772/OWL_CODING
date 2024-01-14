class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int c=0;
        for(int i=0;i<points.size()-1;i++){
            c=max(c,(points[i+1][0]-points[i][0]));
        }
        return c;
    }
};