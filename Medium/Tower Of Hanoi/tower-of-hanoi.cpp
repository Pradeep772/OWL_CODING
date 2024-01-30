//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
    void drunk(int n,int scr,int help,int des,long long &x){
        if(n==0)return;
        
        drunk(n-1,scr,des,help,x);
        cout<<"move disk "<<n<<" from rod "<<scr<<" to rod "<<des<<"\n";
        x++;
        drunk(n-1,help,scr,des,x);
    }
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        long long x=0;
        int scr=from;
        int dec=to;
        int help=aux;
        drunk(N , scr , help , dec , x);
        return x;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends