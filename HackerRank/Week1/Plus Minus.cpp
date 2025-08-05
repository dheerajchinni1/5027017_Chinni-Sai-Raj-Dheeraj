#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pc,nc, nn;
    pc = nc = nn = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] > 0)
        {
            pc++;
        }else if(arr[i] < 0)
        {
            nc++;
        }else nn++;
    }
    cout<<fixed<<setprecision(6)<<(float)pc/n<<endl<<(float)nc/n<<endl<<(float)nn/n<<endl;
}