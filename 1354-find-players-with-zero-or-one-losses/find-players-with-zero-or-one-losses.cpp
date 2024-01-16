class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,pair<int,int>>mp;
        vector<vector<int>>v(2);
        for(auto it:matches){
            mp[it[0]].first++;
            mp[it[1]].second++;
        }
        
        for(auto it:mp){
            if(it.second.second==0){
                v[0].push_back(it.first);
            }
            else if(it.second.second ==1){
                v[1].push_back(it.first);
            }
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        return v;
    }
};