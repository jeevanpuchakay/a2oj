package codeforces.Div2.C.LuckySumOfDigits;

import java.util.*;

// String str = new String(new char[5]).replace("\0", "p"); // "ppppp"

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt();
        String ans;
        if (n % 7 == 0) {
            ans = new String(new char[n / 7]).replace("\0", "7");
        } else if ((n % 7 == 1) && (n >= 8)) {
            ans = "44" + new String(new char[(n - 8) / 7]).replace("\0", "7");
        } else if ((n % 7 == 2) && (n >= 16)) {
            ans = "4444" + new String(new char[(n - 16) / 7]).replace("\0", "7");
        } else if ((n % 7 == 3) && (n >= 24)) {
            ans = "444444" + new String(new char[(n - 24) / 7]).replace("\0", "7");
        } else if ((n % 7 == 4)) {
            ans = "4" + new String(new char[(n - 4) / 7]).replace("\0", "7");
        } else if ((n % 7 == 5) && (n >= 12)) {
            ans = "444" + new String(new char[(n - 12) / 7]).replace("\0", "7");
        } else if ((n % 7 == 6) && (n >= 20)) {
            ans = "44444" + new String(new char[(n - 20) / 7]).replace("\0", "7");
        } else {
            ans = "-1";
        }
        System.out.println(ans);
        input.close();
    }
}