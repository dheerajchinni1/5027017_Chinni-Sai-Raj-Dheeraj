#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        unsigned int no;
        cin>>no;
        cout<<~no<<endl;
    }
}