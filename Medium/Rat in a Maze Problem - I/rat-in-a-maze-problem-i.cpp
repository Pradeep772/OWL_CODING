//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>ans;
    void drunk(vector<vector<int>>&m , int n , int sx , int sy , string s){
        if(sx==n || sy==n || sx<0 || sy<0 || m[sx][sy]==0 || m[sx][sy]==2){
            return;
        }
        if(sx==n-1 && sy==n-1){
            ans.push_back(s);
            return;
        }
        m[sx][sy]=2;
        drunk(m,n,sx+1,sy,s+"D");
        drunk(m,n,sx-1,sy,s+"U");
        drunk(m,n,sx,sy+1,s+"R");
        drunk(m,n,sx,sy-1,s+"L");
        m[sx][sy]=1;
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        drunk(m,n,0,0,"");
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends