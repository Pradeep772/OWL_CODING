//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  const int mod=1e5;
    int minimumMultiplications(vector<int>& arr, int st, int ed) {
        vector<int>vis(100000+1,0);
        queue<pair<int,int>>q;
        q.push({st,0});
        while(!q.empty()){
            int fr=q.front().first;
            int se=q.front().second;
            q.pop();
            if(fr==ed)return se;
            for(int i=0;i<arr.size();i++){
                int val=((1LL*fr*arr[i])%mod);
                if(vis[val])continue;
                q.push({val,se+1});
                vis[val]=1;
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends