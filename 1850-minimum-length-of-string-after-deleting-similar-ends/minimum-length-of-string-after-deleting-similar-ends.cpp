class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                int a=s[i];
                while(s[i]==a){
                    i++;
                }
                if(i>=s.size()){
                    break;
                }
                while(s[j]==a){
                    j--;
                }  
            }
            if(s[i]!=s[j]){
                break;
            }
        }
        if(j-i<0){
            return 0;
        }
        return (j-i)+1;
    }
};