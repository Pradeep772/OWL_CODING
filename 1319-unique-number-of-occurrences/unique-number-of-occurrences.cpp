class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        set<int>s;
        for(auto it:mp){
            s.insert(it.second);
        }
        if(s.size()==mp.size()){
            return 1;
        }
        else{
            return 0;
        }
    }
};