class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int pre=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                pre++;
            }
            else {
                pre--;
            }
            if(pre==0){
                ans=max(ans,i+1);
            }
            if(mp.find(pre)==mp.end()){
                mp[pre]=i;
            }
            else{
                ans=max(ans,abs(mp[pre]-i));
            }

        }
        return ans;
    }
};