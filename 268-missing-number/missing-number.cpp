class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[i]=nums[i];
        }
        for(auto it:mp){
            if(it.first!=it.second){
                return it.first;
            }
        }
        return nums.size();
    }
};