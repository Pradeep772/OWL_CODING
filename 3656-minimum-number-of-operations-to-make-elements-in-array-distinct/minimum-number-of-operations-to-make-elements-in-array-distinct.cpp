class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        reverse(nums.begin(),nums.end());
        int a;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                a=i;
                break;
            }
        }
        int ans=nums.size()-a;
        cout<<ans;
        return ceil(ans/3.0);
    }
};