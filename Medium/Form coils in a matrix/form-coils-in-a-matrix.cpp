//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        vector<vector<int>> matrix(4 * n, vector<int>(4 * n)); 
        int count = 0; 
        for (int i = 0; i < 4 * n; i++) {
            for (int j = 0; j < 4 * n; j++) {
                matrix[i][j] = ++count;
            }
        }
        vector<int> result1; 
        int top = 0, bottom = 4 * n - 1, left = 0, right = 4 * n - 1; 
        while (top <= bottom && left <= right) {
            if (bottom < top) break;
            for (int i = bottom; i >= top; i--) {
                result1.push_back(matrix[i][right]);
            }
            right--; left++;
            if (right < left) break;
            for (int i = right; i >= left; i--) {
                result1.push_back(matrix[top][i]);
            }
            top++; bottom--;
            if (top > bottom) break;
            for (int i = top; i <= bottom; i++) {
                result1.push_back(matrix[i][left]);
            }
            left++; right--;
            if (left > right) break;
            for (int i = left; i <= right; i++) {
                result1.push_back(matrix[bottom][i]);
            }
            bottom--; top++;
        }
        reverse(result1.begin(), result1.end());
        vector<int> result2; 
        top = 0, bottom = 4 * n - 1, left = 0, right = 4 * n - 1; 
        while (top <= bottom && left <= right) {
            if (top > bottom) break;
            for (int i = top; i <= bottom; i++) {
                result2.push_back(matrix[i][left]);
            }
            left++; right--;
            if (left > right) break;
            for (int i = left; i <= right; i++) {
                result2.push_back(matrix[bottom][i]);
            }
            bottom--; top++;
            if (bottom < top) break;
            for (int i = bottom; i >= top; i--) {
                result2.push_back(matrix[i][right]);
            }
            right--; left++;
            if (right < left) break;
            for (int i = right; i >= left; i--) {
                result2.push_back(matrix[top][i]);
            }
            top++; bottom--;
        }
        reverse(result2.begin(), result2.end()); 
        return {result1, result2}; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends