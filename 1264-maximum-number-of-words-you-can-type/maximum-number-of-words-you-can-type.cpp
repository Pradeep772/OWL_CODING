class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        text=text+" ";
        cout<<text;
        map<char,int>mp;
        for(char i:brokenLetters){
            mp[i]=1;
        }
        int ct=0;
        bool f=1;
        for(int i=0;i<text.size();i++){
            if(mp[text[i]]==1)f=0;
            if(text[i]==' '){
                if(f){
                    ct++;
                }
                f=1;
            }
        }
        
        return ct;
    }
};