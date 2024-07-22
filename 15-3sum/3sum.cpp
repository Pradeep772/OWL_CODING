class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size()-2;k++){
            int i=k+1,j=nums.size()-1;
            while(i<j){
                if((nums[i]+nums[j]+nums[k])>0){
                    j--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    i++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    i++;
                    j--;
                }
            }
        }
        set<vector<int>>s(ans.begin(),ans.end());
        ans=vector<vector<int>>(s.begin(),s.end());
        return ans;
    }
};