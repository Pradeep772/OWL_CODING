class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        for(auto it:grid){
            for(auto i:it){
                mp[i]++;
            }
        }
        int miss=0;
        int f=1;
        vector<int>ans;
        for(auto it:mp){
            if(it.first!=f && miss==0){
                miss=f;
            }
            if(it.second==2){
                ans.push_back(it.first);
            }
            f++;
        }
        if(miss==0){
            miss=f;
        }
        ans.push_back(miss);
        return ans;
    }
};