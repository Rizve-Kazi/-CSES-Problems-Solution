#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l,n;cin>>l>>n;

    set<int>position;
    multiset<int>length;

    position.insert(0);
    position.insert(l);

    length.insert(l);


    for(int i=0; i<n; i++){
        int added;cin>>added;

        auto it=position.insert(added).first;

        int previous=*prev(it);
        int nxt= *next(it);

        length.erase(length.find(nxt-previous));
        length.insert(nxt-added);
        length.insert(added-previous);
        cout<<*length.rbegin()<<"\n";
    }
}
