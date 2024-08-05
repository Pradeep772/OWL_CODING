#include<bits/stdc++.h>
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<pair<int,string>>ans;
        for(auto it:mp){
            if(it.second==1){
                for(int i=0;i<arr.size();i++){
                    if(it.first==arr[i]){
                        ans.push_back(make_pair(i,it.first));
                    }
                }
            }
        }
        if(ans.size()<k){
            return "";
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};