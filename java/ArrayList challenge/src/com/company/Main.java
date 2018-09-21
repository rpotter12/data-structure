package com.company;

import java.util.Scanner;

public class Main {



    public static void main(String[] args) {
        // Create a program that implements a simple mobile phone with the following capabilities.
        // Able to store, modify, remove and query contact names.
        // You will want to create a separate class for Contacts (name and phone number).
        // Create a master class (MobilePhone) that holds the ArrayList of Contacts
        // The MobilePhone class has the functionality listed above.
        // Add a menu of options that are available.
        // Options:  Quit, print list of contacts, add new contact, update existing contact, remove contact
        // and search/find contact.
        // When adding or updating be sure to check if the contact already exists (use name)
        // Be sure not to expose the inner workings of the Arraylist to MobilePhone
        // e.g. no ints, no .get(i) etc
        // MobilePhone should do everything with Contact objects only.
        Scanner in=new Scanner(System.in);
        MobilePhone ab=new MobilePhone();
        boolean quit=false;
        int choice;
        while(!quit)
        {
            System.out.println("1. to add");
            System.out.println("2. to modify");
            System.out.println("3. to remove");
            System.out.println("4. display");
            System.out.println("5. to quit");
            choice=in.nextInt();
            switch (choice)
            {
                case 1: String name,contactno;
                        System.out.print("enter name: ");
                        name=in.next();
                    System.out.println("enter contact number: ");
                    contactno=in.next();
                        ab.store(name,contactno);
                        break;
                case 2:
                    System.out.print("enter name: ");
                    name=in.next();
                    System.out.println("enter contact number: ");
                    contactno=in.next();
                        ab.modify(name,contactno);
                        break;
                case 3: ab.remove();
                        break;
                case 4: ab.display();
                        break;
                case 5: quit=true;
                        break;
                default:
                        System.out.println("Error");;
                        break;
            }
        }

    }
}
