class Solution {
public:
    unordered_map<char,char>mp;
    char fun(char n){
        if(mp[n]==n)return n;
        return mp[n]=fun(mp[n]);
    }
    void uni(char a,char b){
       a=fun(a);
       b=fun(b);
       mp[a]=b; 
    } 
    bool equationsPossible(vector<string>& e) {
        for(auto it:e){
            mp[it[0]]=it[0];
            mp[it[3]]=it[3];
        }
        for(auto it:e){
            if(it[1]=='='){
                uni(it[0],it[3]);
            }
        }
        for(auto it:e){
            if(it[1]=='='){
                if(fun(it[0])!=fun(it[3]))
                return 0;
            }
            else{
                if(fun(it[0])==fun(it[3])){
                    return 0;
                }
            }
        }
        return 1;


    }
};