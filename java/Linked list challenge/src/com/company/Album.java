package com.company;

import java.util.ArrayList;
import java.util.LinkedList;

public class Album {
    private String name;
    LinkedList<Song> song=new LinkedList<Song>();
    Song ab;

    public Album(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void getdata(String title, double duration)
    {
         song.add(new Song(title,duration));
    }
}
