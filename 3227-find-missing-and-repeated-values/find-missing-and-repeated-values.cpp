class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        for(auto it:grid){
            for(auto i:it){
                mp[i]++;
            }
        }
        vector<int>ans;
        vector<int>val;
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
            val.push_back(it.first);
        }
        for(int i=0;i<val.size();i++){
            if(val[i]!=i+1){
                ans.push_back(i+1);
                break;
            }
        }
        if(ans.size()==1){
            ans.push_back(val.size()+1);
        }
        return ans;
    }
};