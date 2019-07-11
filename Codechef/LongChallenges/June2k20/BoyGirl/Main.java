package Codechef.LongChallenges.June2k20.BoyGirl;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            String a = input.next();
            int ans = 0;
            for (int i = 0; i < (int) (a.length()) - 1; i++) {
                if (a.charAt(i) != a.charAt(i + 1)) {
                    ans++;
                    i++;
                }
            }
            System.out.println(ans);
        }
        input.close();
    }
}