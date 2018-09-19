package com.company;

import java.util.LinkedList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        // create a program that implements a playlist for songs
        // create a Song class having Title and Duration for a song
        // the program will have an Album class containing a list of songs
        // the albums will be stored in ArrayList
        // Songs from different albums can be added to the playlist and will appear in the list in the order
        // they are added
        // once the songs have been added to the playlist, create a menu of options to:-
        // quit, skip forward to the next song,skip backwards to a previous song. Replay the current song.
        // list the songs in the playlist
        // a song must exist in an album before ot can ve added to the playlist(so you can only play songs that you own).
        // hint: to replay the song , consider what happened when we went back and forth from a city before we started
        // tracking the direction we were going
        // as an optional extra, provide an option to remove the current song from the playlist
        // (hint: listiterator.remove())

        LinkedList<Song> playlist=new LinkedList<Song>();

        Album ab=new Album();
        ab.getdata("let me",3.0);
        ab.getdata("love yourself",4.10);
        ab.getdata("history",3.50);
        ab.getdata("baby",5.10);
        ab.getdata("closer",2.45);
        ab.getdata("perfect",3.33);
        ab.getdata("what makes you beautiful",2.50);
        ab.getdata("kiss you",3.25);


        playlist.add(ab.song.get(0));
        playlist.add(ab.song.get(1));
        playlist.add(ab.song.get(2));
        playlist.add(ab.song.get(3));
        playlist.add(ab.song.get(4));

        int i=0;

        Scanner in=new Scanner(System.in);
        int ch;
        boolean quit=false;
        while(!quit)
        {
            System.out.println("1. current");
            System.out.println("2. next");
            System.out.println("3. prev");
            System.out.println("4. replay");
            System.out.println("5. quit");
            System.out.print("choice: ");
            ch=in.nextInt();
            switch(ch)
            {
                case 1:
                    System.out.println(playlist.get(i));
                    break;
                case 2: i++;
                        if(i<5)
                        {
                            System.out.println(playlist.get(i));
                        }
                        else
                        {
                            i=0;
                        }
                        break;
                case 3: i--;
                        if(i<=0)
                        {
                            System.out.println(playlist.get(i));
                        }
                        else
                        {
                            i=4;
                        }
                        break;
                case 4:
                    System.out.println("replaying song"+playlist.get(i));
                    break;
                case 5: quit=true;
                        break;
            }
        }
    }
}
