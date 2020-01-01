// C++ program to rotate an array
#include <bits/stdc++.h> 
using namespace std; 

/*Function to left Rotate arr[] of 
size n by 1*/
void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[0], i; 
	for (i = 0; i < n - 1; i++) 
		arr[i] = arr[i + 1]; 

	arr[i] = temp; 
} 

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
	for (int i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
} 

/* utility function to print an array */
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int n;
	cout<<"enter size of array: ";
	cin>>n;
	int arr[n];

	cout<<"enter array elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	// Function calling 
	leftRotate(arr, 2, n); 
	printArray(arr, n); 

	return 0; 
} 

