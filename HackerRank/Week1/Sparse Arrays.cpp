#include <iostream>
using namespace std;
int main()
{
    int sn, qn;
    cin>>sn;
    string str[sn];
    cin.ignore();
    for(int i = 0; i<sn; i++)
    {
        getline(cin, str[i]);
    }
    cin>>qn;
    string que[qn];
    int res[qn] = {0};
    cin.ignore();
    for(int i = 0; i <qn; i++)
    {
        getline(cin, que[i]);
    }
    
    for(int i = 0; i<qn; i++)
    {
        for(int j = 0; j<sn; j++)
        {
            if(que[i] == str[j])
            {
                res[i]++;
            }
        }
    }
    
    for(int i = 0; i<qn; i++)
    {
        cout<<res[i]<<endl;
    }
    
}
