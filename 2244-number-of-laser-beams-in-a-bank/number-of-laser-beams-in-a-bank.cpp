class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=0;
        vector<int>v;
        for(auto it:bank){
            int t=0;
            t=count(it.begin(),it.end(),'1');
            if(t!=0){
                v.push_back(t);
            }
        }
        if(v.size()==1 || v.size()==0){
            return 0;
        }
        else{
            for(int i=1;i<v.size();i++){
                n+=v[i-1]*v[i];
            }
        }
        return n;
    }
};