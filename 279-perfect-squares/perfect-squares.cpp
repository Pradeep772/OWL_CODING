class Solution {
public:
    int numSquares(int n) {
        queue<pair<int,int>>q;
        vector<bool>v(10001);
        q.push({n,0});
        int c;
        while(!q.empty()){
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            if(a == 0)return b;
            for(int i=1;i*i<=a;i++){
                if(!v[a-(i*i)]){
                    v[a-(i*i)]=1;
                    q.push({a-(i*i),b+1});
                }
            }
        }
        return -1;
    }
};