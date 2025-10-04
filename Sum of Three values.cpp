#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    vector<int> v1(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    v1 = v;

    sort(v1.begin(), v1.end());

    vector<int> arr;
    int flag = 0;

    for(int i = 0; i < n-2 && !flag; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while(l < r)
        {
            int sum = v1[i] + v1[l] + v1[r];

            if(sum == x)
            {
                arr.push_back(v1[i]);
                arr.push_back(v1[l]);
                arr.push_back(v1[r]);
                flag = 1;
                break;
            }
            else if(sum > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }

    if(flag)
    {
        vector<int> ans;
        vector<bool> used(n, false);

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[j] == arr[i] && !used[j])
                {
                    ans.push_back(j+1);
                    used[j]=true;
                    break;
                }
            }
        }

        int d = 0;
        for(int i = n-1; i >= 0; i--)
        {
            if(v[i] == arr[2])
            {
                d = i+1;
                break;
            }
        }
        ans.push_back(d);

        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
