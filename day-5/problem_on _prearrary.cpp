#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l,r;
    cin>>l>>r;
    vector<vector<int>>a(n);
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            if((v[j]>>i)&1){
                a[j].push_back(1);
                
            }
            else{
                a[j].push_back(0);
            }
            if(j!=0 && a[j-1][i]>0){
                    a[j][i]=a[j][i]+a[j-1][i];
            }
        }
    }
    // for(auto it:a){
    //     for(auto i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans=0;
    for(int i=0;i<32;i++){
        int x=a[r][i]-(l==0?0:a[l-1][i]);
        if(x==(r-l+1)){
            ans=ans|(1<<i);
        }
    }
    cout<<ans<<endl;
    
}