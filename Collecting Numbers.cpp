#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    vector<int>value(n),pos(n);

    for(int i=1; i<=n; i++)cin>>value[i];

    for(int i=1; i<=n; i++){
        pos[value[i]]=i;
    }

    int cnt=1;

    for(int i=2; i<=n; i++){
        if(pos[i]<pos[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
