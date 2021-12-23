/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author student
 */
interface sports{
    int getNumberOfGoals();
    void dispTeam();
}

class Hockey implements sports{
    String team;
    int goals;
    Hockey(String s, int g){
        team = s;
        goals = g;
    }
    public int getNumberOfGoals(){
        return goals;
    }
    public void dispTeam(){
        System.out.println("Hockey Team Name: " + team);
    }
}

class Football implements sports{
    String team;
    int goals;
    Football(String s, int g){
        team = s;
        goals = g;
    }
    public int getNumberOfGoals(){
        return goals;
    }
    public void dispTeam(){
        System.out.println("Football Team Name: " + team);
    }
}

public class sports_8_3 {
     public static void main(String args[]){
        sports hockey, football;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Team Name:");
            String team = sc.nextLine();
        System.out.println("Enter Numbe of Goals");
            int goals = sc.nextInt();
        System.out.println("Enter 1 for a Hocket Team, 2 for a Football Team");
        int opt = sc.nextInt();
        if(opt == 1){
            hockey = new Hockey(team, goals);
            hockey.dispTeam();
            System.out.println("Goals : " + hockey.getNumberOfGoals());
        }else if(opt == 2){
            football = new Football(team, goals);
            football.dispTeam();
            System.out.println("Goals : " + football.getNumberOfGoals());
        }
    }  
}
