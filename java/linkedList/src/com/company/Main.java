package com.company;

import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public Scanner in=new Scanner(System.in);
    LinkedList<Integer> ab=new LinkedList<Integer>();
    public void insertion(int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.println("enter number: ");
            int z=in.nextInt();
            ab.add(z);
        }
    }
    public void display()
    {
        System.out.println("displaying values: ");
        for(int i=0;i<ab.size();i++)
        {
            System.out.println(ab.get(i));
        }
    }
    public static void main(String[] args) {
	// write your code here
        Scanner in=new Scanner(System.in);
        System.out.println("enter number of elements in linkedList: ");
        int n=in.nextInt();
        Main bc=new Main();
        bc.insertion(n);
        bc.display();
    }
}
