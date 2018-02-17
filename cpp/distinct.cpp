#include<iostream>
using namespace std;
int countPairs(long long int arr[], long long int n)
{
    int ans = 0;
 
    // for each index i and j
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
 
            // finding the index with same
            // value but different index.
            if (arr[i] == arr[j])
                ans++;
    return ans;
}
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int c=countPairs(arr,n);
	cout<<c;
}


