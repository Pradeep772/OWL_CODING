class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int ans=INT_MIN;
        int i=0;

        while(i<nums.size()){
            int j=i+1;
            int temp=nums[i];
            while(j<nums.size()){
                if(nums[j-1]<nums[j]){
                    temp+=nums[j];
                }
                else{
                    break;
                }
                j++;
            }
            ans=max(temp,ans);
            i=j;
        }
        return ans;
        
    }
};