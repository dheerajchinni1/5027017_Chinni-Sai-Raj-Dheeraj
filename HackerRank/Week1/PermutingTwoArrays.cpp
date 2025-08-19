#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases > 0)
    {
        int n, k;
        cin>>n>>k;
        int a[n], b[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i<n; i++)
        {
            cin>>b[i];
        }
        bool exist = true;
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        
        for(int i = 0; i<n; i++)
        {
            if(a[i] + b[i] < k)
            {
                exist = false;
            }
        }
        
        if(exist)
        {
            cout<<"YES"<<endl;
        
        }else{
             cout<<"NO"<<endl;
        }
        
        cases--;
    }
}