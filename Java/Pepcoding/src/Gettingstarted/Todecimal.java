package Gettingstarted;
import java.util.*;
//Convert n with base b to decimal number
public class Todecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        System.out.print("Enter base: ");
        int b = sc.nextInt();
        System.out.println("The Decimal Number is: " + toDecimal(n,b));
    }
    public static int toDecimal(int n, int b){
        int multi = 0, dec = 0, rem;
        while (n>0) {
            rem = n % 10;
            n /= 10;
            dec += (rem * (int)Math.pow(b, multi));
            multi++;
        }
        return dec;
    }
}
