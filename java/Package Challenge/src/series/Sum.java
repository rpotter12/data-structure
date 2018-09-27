package series;

public class Sum {
    public static int nSum(int a[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        return sum;
    }
}
