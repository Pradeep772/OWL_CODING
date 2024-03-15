class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int zero=0;
        for(auto it:nums){
            if(it==0){
                zero++;
            }
            else{
                pre*=it;
            }
        }
        vector<int>ans(nums.size());
        if(zero>1){
            return ans;
        }
        else if(zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=pre;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans[i]=pre/nums[i];
            }
        }
        return ans;
    }
};