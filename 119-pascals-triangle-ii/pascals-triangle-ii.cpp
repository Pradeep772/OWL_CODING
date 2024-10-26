class Solution {
public:
    int ncr(int n,int r){
        if(n-r<r)r=n-r;
        long long ans=1;
        for(int i=0;i<r;i++){
            ans*=(n-i);
            ans/=i+1;
        }
        int res=int(ans);
        return res;
    }
    vector<int> getRow(int ri) {
        vector<int>v(ri+1);
        for(int i=0;i<=ri;i++){
            v[i]=ncr(ri,i);
        }
        
        return v;
    }
};