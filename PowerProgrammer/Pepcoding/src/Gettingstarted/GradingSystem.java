package Gettingstarted;

import java.util.*;

public class GradingSystem {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int marks = scn.nextInt();

        // code here
        if (marks > 90) {
            System.out.println("excellent");
        }
        if (marks > 80 && marks < 90) {
            System.out.println("good");
        }
        if (marks > 70 && marks < 80) {
            System.out.println("fair");
        }
        if (marks > 60 && marks < 70) {
            System.out.println("meets expectations");
        }
        if (marks <= 60) {
            System.out.println("below par");
        }
    }
}
