class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                    c=max(c,(nums[i]^nums[j]));
                }
            }
        }
        return c;
    }
};