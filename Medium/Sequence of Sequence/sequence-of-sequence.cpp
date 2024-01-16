//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dfs(int i,int m,int n){
        if(n==0)return 1;
        if(m<i)return 0;
        int c=0;
        for(int j=i;j<=m/n;j++){
            c+=dfs(j*2,m,n-1);
        }
        return c;
        
    }
    int numberSequence(int m, int n){
        return dfs(1,m,n);
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends