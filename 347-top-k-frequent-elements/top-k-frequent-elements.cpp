class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans;
       map<int,int>mp;
       for(auto it:nums){
        mp[it]++;
       }
       vector<pair<int,int>>ms;
       for(auto it:mp){
        ms.push_back(make_pair(it.second,it.first));
       }
       sort(ms.rbegin(),ms.rend());
       for(int i=0;i<k;i++){
        ans.push_back(ms[i].second);
       }
       return ans;
    }
};