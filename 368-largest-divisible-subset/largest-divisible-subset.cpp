class Solution {
public:
    /*vector<int> drunk(vector<int>& nums, vector<int>& ans, int ind) {
     if(ind>=)   
    }*/
    vector<int> largestDivisibleSubset(vector<int>& nums){
       vector<int>ans;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           vector<int>p1;
           int hfs=nums[i];
           p1.push_back(hfs);   
           for(int j=i-1;j>=0;j--){
               if(hfs%nums[j]==0 || nums[j]%hfs==0){
                   p1.push_back(nums[j]);
                   hfs=nums[j];
               }
           }
           hfs=nums[i];
           for(int j=i+1;j<nums.size();j++){
               if(hfs%nums[j]==0 || nums[j]%hfs==0){
                   p1.push_back(nums[j]);
                   hfs=nums[j];
               }
           }
        if(ans.size()<p1.size()){
           ans=p1;
       }
       }
       return ans;
    }
};
