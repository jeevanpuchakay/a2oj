package codeforces.Div2.Round659.CommonPrefixes;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt, n, maxLen;
        int[] pLens;
        tt = input.nextInt();
        while (tt-- > 0) {
            n = input.nextInt();
            pLens = new int[n];
            for (int i = 0; i < n; i++) {
                pLens[i] = input.nextInt();
            }
            String ans = "a", currAns;
            for (int i = 01; i < a[0]; i++)
                ans += 'a';
            System.out.println(ans);
            for (int i = 0; i < n - 1; i++) {
                maxLen = Math.max(pLens[i + 1], pLens[i]);
                if (pLens[i] == 0) {
                    currAns = new String(new char[maxLen]).replace('\0', ans.charAt(0) == 'a' ? 'b' : 'a');
                } else if (maxLen < ans.length()) {
                    currAns = new String(new char[maxLen]).replace('\0', ans.charAt(0) == 'a' ? 'b' : 'a');
                } else {
                    currAns = ans;
                    for (int j = 0; j + ans.length() < maxLen; j++)
                        currAns += ans.charAt(0) == 'a' ? 'b' : 'c';
                }
            }
        }
        input.close();
    }
}