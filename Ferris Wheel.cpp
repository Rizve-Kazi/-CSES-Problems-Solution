#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int cnt = 0;
    int i = 0, second = n - 1;

    while (i <= second) {
        if (v[i] + v[second] <= m) {
            cnt++;
            i++;
            second--;
        } 
        else {
            cnt++;
            i++;
        }
    }

    cout << cnt << endl;
}
