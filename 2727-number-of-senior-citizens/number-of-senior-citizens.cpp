class Solution {
public:
    int countSeniors(vector<string>& d) {
        vector<int>v(d.size());
        string s;
        for(int i=0;i<d.size();i++){
            s=d[i].substr(11,2);
            v[i]=stoi(s);
        }
        int c=0;
        for(auto it:v){
            if(it>60){
                c+=1;
            }
        }
        return c;


    }
};