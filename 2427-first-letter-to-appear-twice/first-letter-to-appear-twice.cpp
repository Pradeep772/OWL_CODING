class Solution {
public:
    char repeatedCharacter(string s) {
        int a=0;
        char b;
        for(auto it:s){
            if(((a>>(it-'a'))&1)==1){
                b=it;
                break;
            }
            else{
                a^=(1<<(it-'a'));
            }
        }
        return b;
    }
};