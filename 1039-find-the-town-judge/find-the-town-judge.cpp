class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.empty())return 1;
        map<int,pair<int,int>>mp;
        for(int i=0;i<trust.size();i++){
            mp[trust[i][0]].first++;
            mp[trust[i][1]].second++;
        }
        for(auto it:mp){
            if(it.second.first==0 && it.second.second==n-1){
                return it.first;
            }
        }
        return -1;
        
    }
};