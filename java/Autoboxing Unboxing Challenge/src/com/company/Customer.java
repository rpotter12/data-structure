package com.company;

import java.util.ArrayList;

public class Customer {
    private ArrayList<Double> transactions=new ArrayList<Double>();
    private String name;

    public Customer(String name, ArrayList<Double> transactions) {
        this.transactions = transactions;
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void tstore(Double t)
    {
        transactions.add(t);
    }
}
