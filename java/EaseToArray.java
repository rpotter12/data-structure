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

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class EaseToArray
{
	public static void main (String[] args) 
	{
		Scanner in=new Scanner(System.in);
		int n,i,t,x;
		t=s.nextInt();
		while(t>0)
		{
		    n=in.nextInt();
		    x=0;
		    int a[]=new int[n];
		    for(i=0;i<n;i++)
		      a[i]=in.nextInt();
		    for(i=0;i<n-1;i++)
		    {
		        if(a[i]==a[i+1])
		        {
		            a[i]=2*a[i];
		            a[i+1]=0;
		        }
		    }
		    for(i=0;i<n;i++)
		    {
		        if(a[i]!=0)
		      System.out.print(a[i]+" ");
		      else
		      {
		          x++;
		          continue;
		      }
		    }
		    for(i=1;i<=x;i++)
		    System.out.print("0 ");
		    t--;
		    System.out.println();
		}
	}
}
