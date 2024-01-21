class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                c+=abs(nums[i]-nums[i+1])+1;
                nums[i+1]=nums[i]+1;
            }
            else if(nums[i]==nums[i+1]){
                nums[i+1]++;
                c++;
            }
        }
        return c;
    }
};