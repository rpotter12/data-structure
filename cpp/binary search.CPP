#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int abc;
    cout<<"enter the element to find: ";
    cin>>abc;
    int f=0,l=(n-1);
    int m=(f+l)/2;
    while(f<=l)
    {
        if(arr[m]<abc)
        {
            f=m+1;
        }
        else if(arr[m]==abc)
        {
            cout<<"location: "<<m+1<<endl;
            break;
        }
        else
        {
            l=m-1;
        }
        m=(f+l)/2;
    }
    if(f>l)
    {
        cout<<"not found";
    }
}
