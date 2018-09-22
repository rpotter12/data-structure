package com.company;

public class Main {

    public static void main(String[] args) {
        // You job is to create a simple banking application.
        // There should be a Bank class
        // It should have an arraylist of Branches
        // Each Branch should have an arraylist of Customers
        // The Customer class should have an arraylist of Doubles (transactions)
        // Customer:
        // Name, and the ArrayList of doubles.
        // Branch:
        // Need to be able to add a new customer and initial transaction amount.
        // Also needs to add additional transactions for that customer/branch
        // Bank:
        // Add a new branch
        // Add a customer to that branch with initial transaction
        // Add a transaction for an existing customer for that branch
        // Show a list of customers for a particular branch and optionally a list
        // of their transactions
        // Demonstration autoboxing and unboxing in your code
        // Hint: Transactions
        // Add data validation.
        // e.g. check if exists, or does not exist, etc.
        // Think about where you are adding the code to perform certain actions

        Bank bank=new Bank("SBI");

        if(bank.addBranch("Kota")) {
            System.out.println("Kota branch created");
        }

        bank.addCustomer("Kota", "abc", 50.05);
        bank.addCustomer("Kota", "pqr", 175.34);
        bank.addCustomer("Kota", "xyz", 220.12);

        bank.addBranch("Chandigarh");
        bank.addCustomer("Chandigarh", "qqq", 150.54);

        bank.addCustomerTransaction("Kota", "abc", 44.22);
        bank.addCustomerTransaction("Kota", "abc", 12.44);
        bank.addCustomerTransaction("Kota", "pqr", 1.65);

        bank.listCustomers("Kota", true);
        bank.listCustomers("Chandigarh", true);

        bank.addBranch("zzz");

        if(!bank.addCustomer("zzz", "lll", 5.53)) {
            System.out.println("Error zzz branch does not exist");
        }

        if(!bank.addBranch("Kota")) {
            System.out.println("Kota branch already exists");
        }

        if(!bank.addCustomerTransaction("Kota", "ttt", 52.33)) {
            System.out.println("Customer does not exist at branch");
        }

        if(!bank.addCustomer("Kota", "abc", 12.21)) {
            System.out.println("Customer abc already exists");
        }
    }
}
