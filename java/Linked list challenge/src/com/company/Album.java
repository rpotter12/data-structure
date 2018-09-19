package com.company;

import java.util.ArrayList;
import java.util.LinkedList;

public class Album {
    ArrayList<String> album=new ArrayList<String>();

    LinkedList<Song> song=new LinkedList<Song>();

    public void getdata(String title,double duration)
    {
         this.song.add(new Song(title,duration));
    }
}
