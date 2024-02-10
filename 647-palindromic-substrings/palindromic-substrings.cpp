class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            
                int j=i,k=i+1;
                while(j>=0 && k<s.size()){
                    if(s[j]==s[k]){
                        j--;
                        k++;
                        c++;
                    }
                    else{
                        break;
                    }
                }
            
                j=i,k=i;
                while(j>=0 && k<s.size()){
                    if(s[j]==s[k]){
                        j--;
                        k++;
                        c++;
                    }
                    else{
                        break;
                    }
                

            }
        }
        return c;
    }
};

    