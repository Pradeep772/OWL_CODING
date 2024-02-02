//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        if(s[s.size()-1]=='-')return -1;
        for(auto it:s){
            if(it!='1' && it!='2' && it!='3' &&it!='4' && it!='5' && it!='6' && it!='7' &&it!='8' && it!='9' && it!='0' && it!='-'){
                return -1;
                break;
            }
        }
        return stoi(s);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends