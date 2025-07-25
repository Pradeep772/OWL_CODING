class Solution {
public:
    int maxSum(vector<int>& nums) {
        int flag=INT_MIN;
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
            flag=max(it,flag);
        }
        if(flag<=0){
            return flag;
        }
        else{
            int ans=0;
            for(auto it:mp){
                int a=it.first;
                if(a>0){
                    ans+=a;
                }
            }
            return ans;
        }
        return 0;
    }
};