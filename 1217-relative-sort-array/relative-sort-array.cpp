class Solution {
public:
    
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        int a=0;
        for(int i=0;i<a2.size();i++){
            for(int j=0;j<a1.size();j++){
                if(a2[i]==a1[j]){
                    swap(a1[a],a1[j]);
                    a++;
                }
            }
        }
        sort(a1.begin()+a,a1.end());
        return a1;
    }
};