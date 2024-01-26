class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       if(left.size()==0)return n-(*min_element(right.begin(),right.end()));
       if(right.size()==0)return (*max_element(left.begin(),left.end()));
       sort(left.begin(),left.end());
       sort(right.begin(),right.end());
       int a=*min_element(right.begin(),right.end());
       int b=*max_element(left.begin(),left.end());
       return (max(b,abs(n-a)));
    }
};