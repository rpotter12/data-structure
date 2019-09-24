#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int number;
    cout<<"enter element to be search: ";
    cin>>number;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number)
        {
            cout<<"element found";
        }
    }
    return 0;
}
