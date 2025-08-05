#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int diag1, diag2;
    diag1 = diag2 = 0;
    for(int i = 0; i<n; i++)
    {
        diag1 += matrix[i][i];
        diag2 += matrix[i][n-i-1];
    }
    cout<<abs(diag1-diag2)<<endl;
}