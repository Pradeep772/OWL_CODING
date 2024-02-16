class Solution {
public:
    bool check(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second)return a.first<b.first;
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(), v.end(), [this](pair<int,int>& a, pair<int,int>& b) { return check(a, b); });

        for(auto it:v){
            if(k<it.second){
                it.second=(k-it.second);
                k=0;
            }
            else if(it.second<=k){
                k-=it.second;
                mp.erase(it.first);
            }
            else if(!k){
                break;
            }
        }
        return mp.size();
    }
};