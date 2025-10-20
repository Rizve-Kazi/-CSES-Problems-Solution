#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    long long max_sum = -1e18;
    long long sum = -1e18;

    for (int i = 0; i < n; i++) {
        sum = max((long long)v[i], sum + v[i]);
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;
}
