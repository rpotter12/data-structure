package com.company;

import java.util.Scanner;

class A
{
    public void sum()
    {
        System.out.println("no number is added");
    }
    public void sum(int a,int b)
    {
        int c=a+b;
        System.out.println("the sum of "+a+" and "+b+" is: "+c);
    }
    public void sum(double a,double b)
    {
        double c=a+b;
        System.out.println("the sum of "+a+" and "+b+" is: "+c);
    }
    public void sum(int a,int b,int c)
    {
        int d=a+b+c;
        System.out.println("the sum of "+a+" and "+b+" and "+c+" is: "+d);
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner in=new Scanner((System.in));
        System.out.print("enter value of a: ");
        int a=in.nextInt();
        System.out.print("enter value of b: ");
        int b=in.nextInt();
        System.out.print("enter value of c: ");
        int c=in.nextInt();
        System.out.print("enter value of d: ");
        double d=in.nextDouble();
        System.out.print("enter value of e: ");
        double e=in.nextDouble();
        A ab=new A();
        ab.sum();
        ab.sum(a,b);
        ab.sum(d,e);
        ab.sum(a,b,c);
    }
}
