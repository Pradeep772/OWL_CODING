class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1){
            return nums;
        }
        vector<int>ans;
        
        for(int i=0;i<=nums.size()-k;i++){
            int tem;
            for(int j=i+1;j<i+k;j++){
                if(nums[j-1]==nums[j]-1){
                    tem=max(nums[j-1],nums[j]);
                }
                else{
                    tem=-1;
                    break;
                }
            }
            ans.push_back(tem);
        }
        return ans;
    }
};