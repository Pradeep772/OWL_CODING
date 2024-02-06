class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto it:strs){
            string q=it;
            sort(it.begin(),it.end());
            mp[it].push_back(q);
        }
        vector<vector<string>>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
        
    }
};