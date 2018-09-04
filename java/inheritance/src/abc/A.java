package abc;

import java.util.Scanner;

public class A
{
    private int uid;
    public int marks;
    private String name;
    protected int sum=0;
    Scanner in=new Scanner(System.in);
    public void getdata()
    {
        System.out.print("enter UID: ");
        uid=in.nextInt();
        System.out.print("enter Name: ");
        name=in.next();
        System.out.print("enter marks: ");
        marks=in.nextInt();
    }
    public void add(int a)
    {
        sum=sum+a;
    }
}
