class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mp;
        int maxx=INT_MIN;
        for(auto it:tasks){
            mp[it]++;
            maxx=max(maxx,mp[it]);
        }
        int ans=(maxx-1)*(n+1);
        for(auto it:mp){
            if(it.second==maxx){
                ans++;
            }
        }
        ans=max(ans,(int)tasks.size());
        return ans;

    }
};