#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n), v2(m);

    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) cin >> v2[i];

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0;
    int cnt = 0;

    while (i < n && j < m) {
        if (abs(v[i] - v2[j]) <= k) {
            cnt++;
            i++;
            j++;
        } 
        else if (v[i] < v2[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    cout << cnt << endl;
    return 0;
}
