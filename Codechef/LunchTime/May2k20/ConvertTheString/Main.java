package Codechef.LunchTime.May2k20.ConvertTheString;
import java.util.*;

// import jdk.nashorn.internal.parser.Scanner;

public class Main {
    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        int n;
        String a, b;
        while (cases-- > 0) {
            n = input.nextInt();
            a = input.next();
            b = input.next();
            int ans = 0;
            ArrayList<Integer>[] forA, forB;
            forA = new ArrayList[26];
            forB = new ArrayList[26];
            boolean[] yes = new boolean[26];
            for (int i = 0; i < 26; i++) {
                forA[i] = new ArrayList<>();
                forB[i] = new ArrayList<>();
            }
            boolean flag = false;
            for (int i = 0; i < n; i++) {
                if (a.charAt(i) < b.charAt(i)) {
                    System.out.println(-1);
                    flag = true;
                    break;
                } else {
                    forA[a.charAt(i) - 'a'].add(i);
                    forB[b.charAt(i) - 'a'].add(i);
                    if (a.charAt(i) != b.charAt(i)) {
                        if (yes[b.charAt(i) - 'a'] != true)
                            ans++;
                        yes[b.charAt(i) - 'a'] = true;
                    }
                }
            }
            for (int i = 0; i < 26; i++) {
                if (forB[i].size() > 0) {
                    if (forA[i].size() == 0) {
                        System.out.println(-1);
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
                continue;
            System.out.println(ans);
            for (int i = 25; i >= 0; i--) {
                if (yes[i] == true) {
                    Collections.sort(forB[i]);
                    System.out.print(forB[i].size() + " ");
                    for (Integer each : forB[i]) {
                        System.out.print(each + " ");
                    }
                    System.out.println(" ");
                }
            }
        }
        input.close();
    }
}