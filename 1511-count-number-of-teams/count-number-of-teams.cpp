class Solution {
public:
    int numTeams(vector<int>& rating) {
       int c=0;
       int n=rating.size();
       for(int i=0;i<n-2;i++){
        for(int j=i+1;n-1>j;j++){
         for(int k=j+1;k<n;k++){
            if((rating[i]<rating[j] && rating[j]<rating[k]) || (rating[i]>rating[j] && rating[j]>rating[k])){
                c++;
            }
         }
        }
       }
       return c;
    }
};