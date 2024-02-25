//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int solve(int coins[],int N,int sum,   vector<vector<long long int> >&dp){
      if(sum < 0 || N <= 0 ){
          return 0;
      }      
      if(sum ==0){
          return 1;
      }
      if(dp[N-1][sum] != -1){
          return dp[N-1][sum];
      }
      //N-1 isliyt kyunki 4 n p index toh 3 h hoga na 0 based indexing hoti h na 
      long long int take = solve(coins,N,sum-coins[N-1],dp);
      long long int not_take = solve(coins,N-1,sum,dp);
      
      dp[N-1][sum] = take + not_take;
      return take+ not_take;
  }
    long long int count(long long int n)
    {
    long long int table[n+1],i;
    memset(table, 0, sizeof(table));
    table[0]=1;                 // If 0 sum is required number of ways is 1.
 
// Your code here
    int coins[3] = {3,5,10};
    int N = n;
    vector<vector<long long int> >dp(3+1,vector<long long int>(n+1,-1));
        return solve(coins,3,n,dp);
 
 
 
}
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends