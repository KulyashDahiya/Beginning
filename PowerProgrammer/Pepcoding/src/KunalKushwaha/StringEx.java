package KunalKushwaha;

import java.util.*;

public class StringEx {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your Name: ");
        String name = sc.nextLine();
        String message = greet();
        System.out.println(message);
        String personalisd = mygreet(name);
        System.out.println(personalisd);
    }

    private static String mygreet(String name) {
        return "Hello " + name;
    }

    private static String greet() {
        return "Kushwaha DSA Course";

    }

}
