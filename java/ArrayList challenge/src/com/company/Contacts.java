package com.company;

public class Contacts {
    private String name;
    private String contactno;

    public Contacts(String name, String contactno) {
        this.name = name;
        this.contactno = contactno;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getContactno() {
        return contactno;
    }

    public void setContactno(String contactno) {
        this.contactno = contactno;
    }
}
