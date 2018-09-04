package com.company;
import abc.A;

import java.util.*;

class B extends A
{
    private int c;
    public void avg(int a)
    {
        c=sum/a;
        System.out.println("average marks is: "+c);
    }
}
public class Main
{
    public static void main(String[] args)
    {

        B bc=new B();
        Scanner in=new Scanner(System.in);
        int a;
        System.out.print("enter number of students: ");
        a=in.nextInt();
        B ab[]=new B[a];
        for(int i=0;i<a;i++)
        {
            ab[i]=new B();
        }
        for(int i=0;i<a;i++)
        {
            ab[i].getdata();
            bc.add(ab[i].marks);
        }
        bc.avg(a);
    }
}
