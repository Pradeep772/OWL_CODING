class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int>ans;
     int c=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            c++;
        }
        else{
            ans.push_back(nums[i]);
        }
     }
     for(int i=0;i<c;i++){
        ans.push_back(0);
     }
     nums=ans;
    }
};