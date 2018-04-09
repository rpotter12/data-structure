/*The Fibonacci sequence a(1), a(2), a(3), ..., a(n), ... is defined by
•	a(1) =1
•	a(2) = 1
•	a(n) = a(n-1) + a(n-2), for all n > 2
This generates the sequence
1, 1, 2, 3, 5, 8, 13, 21, ...
Write a C++ function "fibonacci(...)" that computes the Fibonacci number corresponding to its positive integer argument, so that, for example, fibonacci(7) == 13.
*/
#include<iostream>
using namespace std;
void fibo(int n)
{
    int a=1,b=1,c;
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"1 1";
    else
    {
        cout<<a<<" "<<b;
        for(int i=0;i<n-2;i++)
        {
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
