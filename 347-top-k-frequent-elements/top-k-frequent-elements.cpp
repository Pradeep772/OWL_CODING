class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>v;
        vector<pair<int,int>>p;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            p.push_back(make_pair(it.second,it.first));
        }
        sort(p.rbegin(),p.rend());
        for(auto it:p){
            if(k>0){
                v.push_back(it.second);
                k--;
            }
            else{
                break;
            }
            
        }
        return v;
    }
};