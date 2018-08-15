package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    // create a new class for bank account
        // create fields for account number, balance, customer name, email, phone number
        // create getters and setters for each field
        // create 2 additional method
        // 1. to allow customer to deposit funds(this should increment the balance field).
        // 2. to allow customer to withdrawal funds. this should deduct the balance.
        // but not allow the withdrawal to complete if their insufficient amount.
        // you will want to create various code in the main class to confirm your code is working
        // and some System.out.println()in the two method above as well.

        Account customer1=new Account();
        Scanner in=new Scanner(System.in);
        System.out.print("Enter account Number: ");
        int c=in.nextInt();
        customer1.setNumber(c);
        System.out.println("Enter Name: ");
        String name=in.next();
        customer1.setCustomerName(name);
        System.out.println("Enter email: ");
        String email=in.next();
        customer1.setCustomerEmail(email);
        System.out.println("enter phone number: ");
        String phone=in.next();
        System.out.print("Enter the amount to be deposit: ");
        int a=in.nextInt();
        customer1.deposit(a);
        System.out.print("Enter the amount to be withdrawal: ");
        int b=in.nextInt();
        customer1.withdrawal(b);
    }
}
