#include<iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3];
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0; i<3; i++)  // 3 rows
    {
        for(int j=0; j<3; j++)  // 3 columns
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout<<"The resultant matrix is: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}