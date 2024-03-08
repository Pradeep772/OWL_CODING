class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int m=INT_MIN;
        for(auto it:mp){
            m=max(m,it.second);
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