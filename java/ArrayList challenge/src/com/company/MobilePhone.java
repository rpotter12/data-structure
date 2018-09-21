package com.company;

import java.util.ArrayList;
import java.util.Scanner;

public class MobilePhone {
    private ArrayList<Contacts> contacts=new ArrayList<Contacts>();
    private Scanner in=new Scanner(System.in);

    public void store(String arname,String arcontact)
    {
        contacts.add(new Contacts(arname,arcontact));
    }

    public void modify(String arname,String arcontact)
    {
        int e;
        System.out.print("enter the position you want to modify: ");
        e=in.nextInt();
        contacts.set(e-1,new Contacts(arname,arcontact));
    }

    public void remove()
    {
        int e;
        System.out.print("enter the position to remove: ");
        e=in.nextInt();
        contacts.remove(e-1);
    }

    public void display()
    {
        for(int i=0;i<contacts.size();i++)
        {
            System.out.println("name: "+contacts.get(i).getName());
            System.out.println("contact no: "+contacts.get(i).getContactno());
        }
    }

}
