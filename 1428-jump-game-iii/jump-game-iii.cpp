class Solution {
public:
    bool drunk(vector<int>&arr ,int ind,vector<bool>& vis){
        if(ind<0 || ind>=arr.size())return 0;
        if(arr[ind]==0)return 1;
        if(vis[ind]==1)return 0;
        vis[ind]=1;
        bool left=drunk(arr,ind-arr[ind],vis);
        bool right=drunk(arr,ind+arr[ind],vis);
        vis[ind]=0;
        return left||right;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size()-1);
        return drunk(arr,start,vis);
    }
};