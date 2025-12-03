#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    string nl="\n";
    vector<int>v(n);
    vector<int> prefix_xor(n);
    for(int i=1; i<=n; i++)cin>>v[i];


    prefix_xor[1]=v[1];

    for(int i=2; i<=n; i++)
    {
        prefix_xor[i]=prefix_xor[i-1] ^ v[i];

    }

    while(k--)
    {
        int a,b;
        cin>>a>>b;

        cout<<(prefix_xor[b]^prefix_xor[a-1])<<nl;
    }

    return 0;

}
