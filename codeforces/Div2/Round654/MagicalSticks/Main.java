package codeforces.Div2.Round654.MagicalSticks;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            if (n > 0) {
                System.out.println((n - 1) / 2 + 1);
            } else
                System.out.println(0);
        }

        input.close();
    }
}