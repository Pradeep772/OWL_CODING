class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int v=num;
        while(v){
            int temp=v%10;
            v=v/10;
            if(num%temp==0){
                c++;
            }
        }
        return c;
        
    }
};