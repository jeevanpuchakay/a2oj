package codeforces.Div2.C.FoxAndBoxAcumulation;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt();
        int[] xn = new int[n];
        for (int i = 0; i < n; i++)
            xn[i] = input.nextInt();
        input.close();
        Arrays.sort(xn);
        // int[] top = new int[n];
        boolean flag = false;
        int ans = n, temp, start = 1, end = n, lastLevel, itr;
        while (start <= end) {
            temp = start + (end - start) / 2;
            // lastLevel = 0;
            flag = false;
            lastLevel = (n % temp + temp - 1);
            for (int i = 0; i < temp; i++) {
                itr = lastLevel - i;
                while ((itr>=0)&&(itr<n) && (xn[itr] == 0)) {
                    if (itr - temp >= 0) {
                        flag = true;
                        break;
                    }
                    itr -= temp;
                }
                if (flag)
                    break;
            }

            if (!flag) {
                ans = Math.min(ans, temp);
                end = temp - 1;
            } else {
                start = temp + 1;
            }
        }
        System.out.println(ans);
    }
}