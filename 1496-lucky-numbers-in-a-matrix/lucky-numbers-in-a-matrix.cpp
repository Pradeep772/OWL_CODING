class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       vector<int>v;
       vector<int>ans;
       for(int i=0;i<matrix.size();i++){
        int mi=*min_element(matrix[i].begin(), matrix[i].end());
        v.push_back(mi);
       }
       int j=0;
       for(int i=0;i<matrix[0].size();i++){
            int ma=0;
            while(j<matrix.size()){
                ma=max(ma,matrix[j][i]);
                j++;
            }
            if(find(v.begin(),v.end(),ma)!=v.end()){
                ans.push_back(ma);
            }
            ma=0;
            j=0;
       }
       return ans;
    }
    
};