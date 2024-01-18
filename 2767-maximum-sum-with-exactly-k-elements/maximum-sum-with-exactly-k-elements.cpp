class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=nums[nums.size()-1],a=c;

        k=k-1;
        while(k){
            c+=a+k;
            k--;
        }
        return c;
    }
};