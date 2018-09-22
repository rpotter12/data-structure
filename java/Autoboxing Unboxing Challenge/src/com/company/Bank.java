package com.company;

import java.util.ArrayList;

public class Bank {
    private ArrayList<Branches> branches=new ArrayList<Branches>();

    public void store(String bname)
    {
        branches.add(new Branches(bname));
    }
}
