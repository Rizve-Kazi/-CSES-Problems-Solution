#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>v(n);
    vector<int>v1(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    v1=v;
    sort(v1.begin(),v1.end());

    vector<int> arr;
    int flag=0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int l=j+1;
            int r=n-1;

            while(l<r)
            {
                long long sum = v1[i] + v1[j] + v1[l] + v1[r];
                if(sum == m)
                {
                    arr.push_back(v1[i]);
                    arr.push_back(v1[j]);
                    arr.push_back(v1[l]);
                    arr.push_back(v1[r]);
                    flag=1;
                    break;
                }
                else if(sum > m)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }

        }
      if(flag) break;
    }

    if(flag==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        vector<int>ans;
        vector<bool>used(n,false);

        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v[j]==arr[i] && !used[j])
                {
                    ans.push_back(j+1);
                    used[j]=true;
                    break;
                }
            }
        }

        int d=0;
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==arr[3])
            {
                d=i+1;
                break;
            }
        }

        ans[3]=d;

        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
    }
    return 0;
}
