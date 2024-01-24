class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
      map<int,int>mp;
      for(auto it:nums)mp[it]++;
      int c=0;
      int a=0,b=0;
      for(auto it:mp){
          a+=ceil(it.second/2);
          b+=it.second%2;
      }
    return {a,b};
    }
};