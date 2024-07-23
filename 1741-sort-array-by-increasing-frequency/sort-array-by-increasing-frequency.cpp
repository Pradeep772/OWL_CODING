class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(auto it:nums){
            mp[it]++;
        }
        
        sort(nums.begin(),nums.end(),[&](const int  a, const int  b){return (mp[a]==mp[b])?(a>b):mp[a]<mp[b];});
        
        return nums;
    }
};