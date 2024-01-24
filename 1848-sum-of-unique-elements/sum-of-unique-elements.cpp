class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        int c=0;
        for(auto it:mp){
            if(it.second==1){
                c+=it.first;
            }
        }
        return c;
    }
};