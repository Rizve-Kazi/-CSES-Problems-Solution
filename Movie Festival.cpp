#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end(), [](pair<long long, long long> a, pair<long long, long long> b) {
        return a.second < b.second;
    });

    long long cnt = 1;               
    long long last = p[0].second;    

    for (int i = 1; i < n; i++) {   
        if (p[i].first >= last) {   
            cnt++;
            last = p[i].second;     
        }
    }

    cout << cnt << endl;
    return 0;
}
