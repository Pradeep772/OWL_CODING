class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int a=0;a<nums.size()-3;a++){
        for(int k=a+1;k<nums.size()-2;k++){
            int i=k+1,j=nums.size()-1;
            while(i<j){
                long long int f=1ll*nums[i]+nums[j]+nums[k]+nums[a];
                if(f> target){
                    j--;
                }
                else if(f< target){
                    i++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[a]});
                    i++;
                    j--;
                }
            }
        }
        }
        set<vector<int>>s(ans.begin(),ans.end());
        ans=vector<vector<int>>(s.begin(),s.end());
        return ans;
        
    }
};