class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<e.size();i++){
            mp[e[i][0]]++;
            mp[e[i][1]]++;
            if(mp[e[i][0]]>1){
                ans=e[i][0];
                break;
            }
            else if(mp[e[i][1]]>1){
                ans=e[i][1];
                break;
            }
        }
        return ans;
    }
};