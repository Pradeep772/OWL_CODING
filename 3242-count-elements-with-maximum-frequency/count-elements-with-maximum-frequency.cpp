class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int m=INT_MIN;
        for(auto it:nums){
            mp[it]++;
            m=max(m,mp[it]);
        }
        int c=0;
        for(auto it:mp){
            if(it.second==m){
                c+=m;
            }
        }
        return c;
    }
};