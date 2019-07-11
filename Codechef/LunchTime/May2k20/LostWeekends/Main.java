
package Codechef.LunchTime.May2k20.LostWeekends;
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int p;
            int[] a = new int[5];
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                a[i] = input.nextInt();
            }
            p = input.nextInt();
            for (int i = 0; i < 5; i++) {
                sum += (a[i] * p - 24);
            }
            if (sum > 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");

            }
        }
        input.close();
    }
}