class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto it:mp){
            int n=it.second.size();
            if(n>1){
                vector<int>a(it.second.begin(),it.second.end());
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if((a[i]*a[j])%k==0){
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};