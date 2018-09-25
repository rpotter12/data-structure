package com.company;

public class Main {

    public static void main(String[] args) {
        // Create a generic class to implement a league table for a sport.
        // The class should allow teams to be added to the list, and store
        // a list of teams that belong to the league.
        //
        // Your class should have a method to print out the teams in order,
        // with the team at the top of the league printed first.
        //
        // Only teams of the same type should be added to any particular
        // instance of the league class - the program should fail to compile
        // if an attempt is made to add an incompatible team.

        League<Team<Badminton>> badminton=new League<>("BWF");
        Team<Badminton> India=new Team<>("India");
        Team<Badminton> China=new Team<>("China");
        Team<Badminton> England=new Team<>("England");
        Team<Badminton> Malaysia=new Team<>("Malaysia");

        badminton.addTeam(India);
        badminton.addTeam(China);
        badminton.addTeam(England);
        badminton.addTeam(Malaysia);

        India.matchResult(Malaysia,1,0);
        China.matchResult(England,2,3);

        badminton.displayLeagueTable();
    }
}
