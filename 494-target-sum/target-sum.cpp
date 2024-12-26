class Solution {
public:
    int fun(vector<int>&n,int tar,int ct,int bas,int ind){
        if(ind==n.size()){
            return bas==tar?1:0;
        }
        return fun(n,tar,ct,bas+n[ind],ind+1)+fun(n,tar,ct,bas-n[ind],ind+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        if(nums.size()==1 && abs(nums[0])==abs(target))return 1;
        if(nums.size()==1 && nums[0]!=target)return 0;
        return fun(nums,target,0,0,0);
        
    }
};