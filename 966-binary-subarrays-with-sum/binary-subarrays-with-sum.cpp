class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int n = nums.size();
        int left1 = 0, left2 = 0, sum1 = 0, sum2 = 0;

        for (int right = 0; right < n; right++) {
            sum1 += nums[right];
            while (left1 <= right && sum1 > goal) {
                sum1 -= nums[left1++];
            }
            
            sum2 += nums[right];
            while (left2 <= right && sum2 >= goal) {
                sum2 -= nums[left2++];
            }

            count += left2 - left1;
        }
        
        return count;

    }
};