#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back({a, 1});   
        p.push_back({b, -1});  
    }
 
    sort(p.begin(), p.end());
    int maxs = INT_MIN;
    int sum = 0;
 
    for (auto &x : p) {
        sum += x.second;
        maxs = max(maxs, sum);
    }
 
    cout << maxs << endl;
    return 0;
}
