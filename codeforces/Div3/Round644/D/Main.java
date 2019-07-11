package codeforces.Div3.Round644.D;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cases = input.nextInt();
        int a, b, low;
        boolean done;
        while (cases-- > 0) {
            a = input.nextInt();
            b = input.nextInt();
            done = false;
            if (a <= b) {
                System.out.println(1);
                done = true;
                continue;
            }
            low = (int) Math.floor(Math.sqrt(b));
            for (int j = Math.min(low, b); j > 0; j--) {
                if (a % j == 0) {
                    System.out.println((a / j));
                    done = true;
                    break;
                }
            }
            if (!done) {
                System.out.println(a);
            }
        }
    }
}