class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        vector<int>ans(2);
        while(i<=j){
            if((nums[i]+nums[j])<target){
                i++;
            }
            else if((nums[i]+nums[j])>target){
                j--;
            }
            else{
                ans[0]=mp[nums[i]][mp[nums[i]].size()-1];
                mp[nums[i]].pop_back();
                ans[1]=mp[nums[j]][mp[nums[j]].size()-1];
                mp[nums[i]].pop_back();
                break;
            }
        }
        return ans;
    }
};