//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        vector<int> a,b;
        
        int size = q.size();
        for(int i=1; i<=size && !q.empty() ; i++){
            
            if(i<= size/2)
                a.push_back(q.front());
            else
                b.push_back(q.front());
                
            q.pop();
        }

        char flag = 'a';
        for(int i=0, j=0; i<size/2 || j<size/2; ){
            if(flag == 'a'){
                ans.push_back(a[i]);
                i++;
                flag = 'b';
            }
            else{
                ans.push_back(b[j]);
                j++;
                flag = 'a';
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends