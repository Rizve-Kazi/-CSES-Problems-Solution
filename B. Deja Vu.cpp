#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        vector<int> v1(m);

        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < m; i++) cin >> v1[i];

        int s = 0; 

        for(int i = 0; i < m; i++){
            int x = v1[i]; 

            if(x < s || s == 0){  
                s = x;            

                int pw = 1 << x;         
                int add = 1 << (x - 1); 

                for(int j = 0; j < n; j++){
                    if(v[j] % pw == 0){  
                        v[j] += add;     
                    }
                }
            }
        }

        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "\n";
    }
}
