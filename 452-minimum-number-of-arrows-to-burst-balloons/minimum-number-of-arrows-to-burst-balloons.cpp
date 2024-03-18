class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max_range=points[0][1],no_of_arrows=1,n=points.size();
        for(int ind=1;ind<n;ind++){
            if(points[ind][0]<=max_range){
                max_range=min(max_range,points[ind][1]);
            }
            else{
                no_of_arrows++;
                max_range=points[ind][1];
            }
        }
        return no_of_arrows;
    }
};