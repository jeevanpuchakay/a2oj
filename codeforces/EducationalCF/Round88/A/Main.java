package codeforces.EducationalCF.Round88.A;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt();
            int m = input.nextInt();
            int k = input.nextInt();
            int ans = Math.min(n / k, m);
            m -= ans;
            ans = ans - (m / (k - 1)) -(m % (k - 1) > 0 ? 1 : 0);
            System.out.println(ans);
        }

        input.close();
    }
}