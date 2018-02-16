/*Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number, then output the one having maximum absolute value. If n is completely divisible by m(not equal to 0), then output n only. Time complexity of O(1) is required.

Input:
The first line consists of an integer T i.e number of test cases. The first and only line of each test case contains two space separated integers n and m.

Output:
Print the closest number to n which is also divisible by m.

Constraints: 
1<=T<=100
-1000<=n<=1000

Example:
Input:
2
13 4
-15 6

Output:
12
-18*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,m,a,b,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>m;
	    a=n;
	    b=n;
	    while(1)
	    {
	        if(a%m==0)
	        {
		    cout<<a<<endl;
	            break;
	        }
	        else if(b%m==0)
	        {
	            cout<<b<<endl;
	            break;
	        }
	        a++;
	        b--;
	    }
	}
	return 0;
}

