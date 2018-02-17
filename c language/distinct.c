/*"The blood of House of El will always bind us together."

What the Kryptonians need is to be together, to be united in order to save the apocalypse.

For that, Seg-El has decided to carry out some encoding. The people of the same behavior if made to stay together will lead to enhanced protection of Krypton.

There are N people on Krypton. Each has a behavior A[i] associated with him/her.

You need to tell Seg-El the total number of ways to choose any two people of same behavior so that they can be made to stay together.

 

Input
First line consists of N - the number of people.

Second line comprises N space separated integers denoting A[i].

 

Output
Print the answer to the number of ways to place 2 people together having same behaviour.

 

Constraints
1 = N = 100000
1 = A[i] = 1015
 

Example
Input:

4

1 1 2 2

Output:

 2*/




//#include<iostream>
//using namespace std;
#include<stdio.h>


int main()
{
	long int n;
	//cin>>n;
	scanf("%llu",&n);
	long long int arr[n],ans;
	for(int i=0;i<n;i++)
	{
		//cin>>arr[i];
		scanf("%lu",&arr[i]);
	}
	for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
 
            // finding the index with same
            // value but different index.
            if (arr[i] == arr[j])
                ans++;
	//long long int c=countPairs(arr,n);
	//cout<<c;
	printf("%llu",ans);
}
