package Gettingstarted;
import java.util.*;
public class IsPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String e = "Start";
        while (!e.equals("exit")) {
            System.out.print("Enter Number: ");
            int n = sc.nextInt();
            boolean b = true;
            for (int div = 2; div <= (int)Math.sqrt(n); div++) {
                if (n % div == 0) {
                    b = false;
                    break;
                }
            }
            if (b)
                System.out.println("Prime");
            else
                System.out.println("Non Prime");
            e = sc.next();
        }
    }
}
