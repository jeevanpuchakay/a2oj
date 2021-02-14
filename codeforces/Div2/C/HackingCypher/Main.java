package codeforces.Div2.C.HackingCypher;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static String s;
    static int n;

    public static void main(String[] args) {
        s = input.next();
        int a = input.nextInt(), b = input.nextInt(), pos = 0, count = 1;
        boolean found = false;
        n = s.length();
        input.close();
        HashSet<Integer> set = new HashSet<>();
        int temp = (int) 0;
        while (pos < n) {
            temp *= 10;
            temp %= a;
            temp += (s.charAt(pos) - '0');
            temp %= a;
            if (temp == 0) {
                set.add(pos);
            }
            pos++;
        }
        pos = n - 1;
        temp = 0;
        while (pos > 0) {
            temp += ((s.charAt(pos) - '0') % b) * count;
            temp %= b;
            count *= 10;
            count %= b;
            if ((temp == 0) && (set.contains(pos - 1))) {
                if (s.charAt(pos) != '0') {
                    System.out.println("YES");
                    int itr = 0;
                    while ((itr < pos) && (s.charAt(itr) == '0'))
                        itr++;
                    // while (itr < pos)
                    System.out.print(s.substring(itr, pos));
                    while ((itr < n) && (s.charAt(itr) == '0'))
                        itr++;
                    System.out.println();
                    // while (itr < n)
                    System.out.print(s.substring(pos, n));
                    // return;
                    found = true;
                    break;
                }
            }
            pos--;
        }
        if (!found)
            System.out.println("NO");
    }

    static boolean check(int pos1) {
        int i = 0;
        while ((i <= pos1) && (s.charAt((int) i) == '0'))
            i++;
        if (i == pos1 + 1)
            return false;
        i = pos1 + 1;
        while ((i < n) && (s.charAt((int) i) == '0'))
            i++;
        if (i == n)
            return false;
        return true;
    }
}