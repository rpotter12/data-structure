#include<stdio.h>
#include<conio.h>
#include<math.h>
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
int main()
{
  int i;
  scanf("%d",&i);
  isFibonacci(i)? printf("%d is a fibonaki number\n",i): 
                  printf("%d is not a fibonaki number\n",i); 
  return 0;
}
