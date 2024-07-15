//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if((9*d)<s){
            return "-1";
            
        }
        if(s<10 and d==1){
            return to_string(s);
        }
        
        string ans="";
        
        while(s>=10 and d>0){
            ans='9'+ans;
            s-=9;
            d--;
        }
        if(s<10){
            if(d==1){
                ans=to_string(s)+ans;
            }
            else{
            ans=to_string(s-1)+ans;
            d--;
        
            while(d>0){
            ans='0'+ans;
            d--;
            }
            ans[0]='1';    
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends