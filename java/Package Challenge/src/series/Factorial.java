package series;

public class Factorial {
    public static int factorial(int n)
    {
        int fact=1;
        while(n!=0)
        {
            fact=fact*n;
            n=n-1;
        }
        return fact;
    }
}
