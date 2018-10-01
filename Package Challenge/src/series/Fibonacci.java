package series;

public class Fibonacci {
    public static int fibonacci(int n)
    {
        int a=0,b=1,c=0;
        if(n==1)
        {
            return a;
        }
        else if(n==2)
        {
            return b;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            return c;
        }
    }
}
