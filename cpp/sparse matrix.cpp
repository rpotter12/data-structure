#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"enter elements: "<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || j==i+1 || i==j+1)
            {
                cin>>a[i][j];
            }
        }
    }
    cout<<"print array: "<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || j==i+1 || i==j+1)
            {
                cout<<a[i][j]<<"  ";
            }
            else
                cout<<"*  ";
        }
        cout<<"\n"<<endl;
    }
}
