class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int c=0;
        if(nums1.size()%2==1){
            for(auto it:nums2){
                c^=it;
            }
        }
        if(nums2.size()%2==1){
            for(auto it:nums1){
                c^=it;
            }
        }
        return c;

    }
};