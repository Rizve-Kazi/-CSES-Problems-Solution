
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int m = -1;
    set<int> s;

    int i=0, j=0;

    while(j < n){
        s.insert(v[j]);
        int sz = (j - i + 1);

        if(sz == s.size()) {
            m = max(m, (int)s.size());
            j++;
        }
        else {
            while(v[i] != v[j]) {
                s.erase(v[i]);
                i++;
            }
            s.erase(v[i]);
            i++;
        }
    }

    cout << m << endl;
}
