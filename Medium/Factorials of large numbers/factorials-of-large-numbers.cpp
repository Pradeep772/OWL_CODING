//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int>v;
        v.push_back(1);
        for(int i=1;i<N+1;i++){
            int c=0,x;
            for(int j=0;j<v.size();j++){
                x=1LL*(v[j]*i)+c;
                c=x/10;
                v[j]=x%10;
            }
            while(c){
                v.push_back(c%10);
                c=c/10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends