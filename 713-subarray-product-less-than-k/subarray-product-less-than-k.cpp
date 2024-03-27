class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int pre=1;
            for(int j=i;j<nums.size();j++){
                pre*=nums[j];
                if(pre>=k){
                    break;
                }
                else{
                    c++;
                }
            } 
        }
        return c;
    }
};