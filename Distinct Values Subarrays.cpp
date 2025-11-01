#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
 
    for(int i=0; i<n; i++)cin>>v[i];
 
    set<int>s;
 
    long long int cnt=0;
 
    
 
    int i=0,j=i;
    int sz = 0;
 
    while(j<n){
 
        s.insert(v[j]);
        int sz = j-i+1;
        if(s.size()==sz){
            j++;
            cnt+=s.size();
        }
 
        else {
            while(v[i]!=v[j])
            {
                s.erase(v[i]);
                i++;
            }
            s.erase(v[i]);
            i++;
        }
    }
    cout<<cnt<<endl;
}
