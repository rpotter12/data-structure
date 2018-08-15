package com.company;

public class Account {
    // create fields for account number, balance, customer name, email, phone number
    // create getters and setters for each field
    // 1. to allow customer to deposit funds(this should increment the balance field).
    // 2. to allow customer to withdrawal funds. this should deduct the balance.
    private int number;
    private double balance;
    private String customerName;
    private String customerEmail;
    private String customerPhoneNumber;

    public Account() {
        this.balance=0;
    }

    public void deposit(int a)
    {
        balance=balance+a;
        System.out.println(a+ " Amount has been added successfully");
    }

    public void withdrawal(int withdrawalAmount)
    {
        if(withdrawalAmount < balance)
        {
            balance=balance - withdrawalAmount;
            System.out.println("Amount has been withdrawal succesfully");
        }
        else
        {
            System.out.println("don't have enough amount");
        }
    }

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerEmail() {
        return customerEmail;
    }

    public void setCustomerEmail(String customerEmail) {
        this.customerEmail = customerEmail;
    }

    public String getCustomerPhoneNumber() {
        return customerPhoneNumber;
    }

    public void setCustomerPhoneNumber(String customerPhoneNumber) {
        this.customerPhoneNumber = customerPhoneNumber;
    }
}
