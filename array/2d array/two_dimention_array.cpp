#include<iostream.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter dimention of array: ";
	cin>>n>>m;

	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<m;i++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"print 2d array: "<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

