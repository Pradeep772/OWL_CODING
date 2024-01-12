class Solution {
public:
    int vol(string s){
        int c=0;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u' ){
                c++;
            }
            
        }
        return c;
    }
    bool halvesAreAlike(string s) {
        string a="",b="";
        int c=s.size()/2;
        for(int i=0;i<c;i++){
            a+=s[i];
        }
        for(int i=c;i<s.size();i++){
            b+=s[i];
        }

        if(vol(a)==vol(b)){
            return 1;
        }
        else{
            return 0;
        }
    }
};