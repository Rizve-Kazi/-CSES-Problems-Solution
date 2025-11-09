#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>v(n);
 
    for(int i=0; i<n; i++)cin>>v[i];
 
    long long ans=1;
 
    sort(v.begin(),v.end());
 
    for(int i=0; i<n; i++){
        if(v[i]>ans){
            // cout<<ans<<endl;
            break;
        }
        ans=ans+v[i];
    }
    cout<<ans<<endl;
}
