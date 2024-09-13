class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans(queries.size());
        for(int i=0;i<queries.size();i++){
            int n=arr[queries[i][0]];
            for(int j=queries[i][0]+1;j<=queries[i][1];j++){
                n^=arr[j];
            }
            ans[i]=n;
        }
        return ans;
    }
};