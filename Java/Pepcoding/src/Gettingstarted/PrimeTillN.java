package Gettingstarted;
import java.util.*;
public class PrimeTillN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Primes to print upto: ");
        int m = sc.nextInt();
        for (int n = 1; n < m; n++) {
            boolean b = true;
            for (int div = 2; div <= (int) Math.sqrt(n); div++) {
                if (n % div == 0) {
                    b = false;
                    break;
                }
            }
            if(b)
                System.out.println(n);
        }
    }
}
