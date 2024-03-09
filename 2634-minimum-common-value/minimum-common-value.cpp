class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int pre1=0,pre2=0;
        for(auto it:nums1){
            if(pre1!=it){
                mp[it]++;
                pre1=it;
            }
            
        }
        for(auto it:nums2){
            if(pre2!=it){
                mp[it]++;
                pre2=it;
            }
        }
        for(auto it:mp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};