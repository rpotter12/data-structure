package com.company;

import java.util.ArrayList;

public class Branches {
    private String Bname;
    private ArrayList<Customer> customers=new ArrayList<Customer>();

    public Branches(String bname) {
        Bname = bname;
    }

    public String getBname() {
        return Bname;
    }

    public void setBname(String bname) {
        this.Bname = bname;
    }

    public void cstore(String name, ArrayList<Double> tran)
    {
        customers.add(new Customer(name,tran));
    }
}
