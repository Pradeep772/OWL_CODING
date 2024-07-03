class Solution {
public:
    int minDifference(vector<int>& nums) {
       if(nums.size()<=4){
        return 0;
       }
       sort(nums.begin(),nums.end());
       return min({abs(nums[nums.size()-4]-nums[0]),abs(nums[nums.size()-3]-nums[1]),abs(nums[3]-nums[nums.size()-1]),abs(nums[2]-nums[nums.size()-2])});
    }
};