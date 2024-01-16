class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int m=(n*(n+1))/2;
        int c=0;
        for(int i=1;i<n;i++){
            c+=i;
            if(c==m-c+i){
                return i;
            }
        } 
        return -1;  
    }

};