package javaforCpp;
import java.util.*;
public class ChangeValue {
    public static void main(String[] args) {
        int[] arr = new int[5];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;
        System.out.println(Arrays.toString(arr));
        change(arr);
    }

    public static void change(int[] nums) {
        nums[0] = 99;
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
        System.out.println("other way to print");
        for(int val: nums) {
            System.out.println(val);
        }
    }
}
