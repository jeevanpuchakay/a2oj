package codeforces.Div3.Round644.A;

import java.util.*;

// import jdk.nashorn.internal.parser.Scanner;

public class Main {
    public static void main(String[] args) {
        int cases;
        Scanner input = new Scanner(System.in);
        cases = input.nextInt();
        int a, b, mi, ma;
        while (cases-- > 0) {
            a = input.nextInt();
            b = input.nextInt();
            mi = Math.min(a, b);
            ma = Math.max(a, b);
            int ans = Math.min(Math.max((2 * mi), ma), mi + ma);
            System.out.println(ans * ans);
        }

    }
}