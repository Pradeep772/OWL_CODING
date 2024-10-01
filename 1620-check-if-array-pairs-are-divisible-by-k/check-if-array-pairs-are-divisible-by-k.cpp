class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[((arr[i]%k)+k)%k]++;
        }
        if(mp[0]%2!=0){
            return 0;
        }
        for(int i=1;i<k;i++){
            if(mp[i]!=mp[k-i]){
                return 0;
            }
        }

        return 1;
    }
};