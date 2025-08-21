#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i = 0; i<n; i++)
    {
        cin>>s[i];
    }
    int d, m;
    cin>>d>>m;
    int sum = 0;
    int count = 0;
    for(int i = 0; i<m; i++)
    {
        sum += s[i];
    }
    if(sum == d)
    {
        count++;
    }
    for(int i = m; i<n; i++)
    {
        sum += s[i] - s[i-m];
        if(sum == d) count++;
    }
    cout<<count<<endl;
}
