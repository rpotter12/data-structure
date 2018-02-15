/*Given an array of integers of size N. Assume ‘0’ as invalid number and all other as valid number. Write a program that modifies the array in such a way that if just next valid number is same as current number, double its value and replace the next number with 0. After the modification, rearrange the array such that all 0’s are shifted to the end and the sequence of the valid number or new doubled number is maintained as in the original array.

Examples:

Input : arr[] = {2, 2, 0, 4, 0, 8}
Output : 4 4 8 0 0 0

Input : arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
Output :  4 2 12 8 0 0 0 0 0 0
Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test case follows. First line of each test contains an integer N denoting the size of the array. Then next line contains N space separated integers denoting the elements of the array.

Output:
For each test case print space separated elements of the new modified array on a new line.

Constraints:
1<=T<=103
1<=N<=105

Example:
Input:
2
5
2 2 0 4 4
5
0 1 2 2 0
Output:
4 8 0 0 0
1 4 0 0 0*/

#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
  int T;
  cin>>T;
  for(int i=1;i<=T;i++)
  {
   int N;
   cin>>N;
   int A[N],B[N];
   int p=0;
   for(int i=0;i<N;i++)
   {
       cin>>A[i];
   }
  for(int i=0;i<N;i++)
  {
   if(A[i]==A[i+1])
   {
      A[i]=2*A[i];
      A[i+1]=0;
   }
  }
   for(int i=0;i<N;i++)
   {

     if(A[i]!=0)
     {
         B[p]=A[i];
         p++;
     }
   }
   for(int i=p;i<N;i++)
   {
    B[i]=0;
   }
   for(int i=0;i<N;i++)
   {
       cout<<B[i]<<" ";
   }
   cout<<endl;
  }

    return 0;
}

