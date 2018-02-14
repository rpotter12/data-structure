class CheckFibonakiNumber
{
    static  boolean isPerfectSquare(int x)
    {
        int s = (int) Math.sqrt(x);
        return (s*s == x);
    }
      
    static boolean isFibonacci(int n)
    {
        return isPerfectSquare(5*n*n + 4) ||
               isPerfectSquare(5*n*n - 4);
    } 
    public static void main(String[] args)
    {
        for (int i = 1; i <= 10; i++)
             System.out.println(isFibonacci(i) ?  i +  " is a Fibonacci Number" :
                                                  i + " is a not Fibonacci Number");
    }
}
