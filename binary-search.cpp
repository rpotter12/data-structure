#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s;
void binarySearch(int arr[],int i, int j)
{
    int mid=(i+j)/2,flag=0;
    if(arr[mid]==s)
    {
        flag++;
    }
    else if(s>arr[mid])
    {
        binarySearch(arr,mid+1,j);
    }
    else if(s<arr[mid])
    {
        binarySearch(arr,i,mid);
    }
    if(flag==0)
        cout<<"element not found";
    else
        cout<<"element found";

}
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"enter element to search: ";
    cin>>s;
    binarySearch(arr,0,n-1);
}
