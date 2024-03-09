class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        map<int,int>mp;
        for(auto it:s1){
            mp[it]++;
        }
        for(auto it:s2){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};