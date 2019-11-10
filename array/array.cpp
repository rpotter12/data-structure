#include<iostream>
using namespace std;
int main()
{
	# decleration of array
	int arr[10];

	# taking input in array
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}

	# print array
	cout<<"print array: ";
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
}
