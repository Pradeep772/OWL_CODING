class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        int c=0;
        for(auto it:nums){
            if(it>0){
                mp[it];
            }
        }
        if(mp.size()==0){
            return 1;   
        }
        int ans=INT_MIN;
        int ma=INT_MIN;
        for(auto it:mp){
            c++;
            ma=max(ma,it.first);
            if(it.first!=c){
                ans=c;
                break;
            }
        }
        
        if(ans<0){
            return ma+1;
        }
        else{
            return ans;
        }
        
    }
};