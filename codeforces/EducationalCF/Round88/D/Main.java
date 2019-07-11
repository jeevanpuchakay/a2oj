// import java.*;
import java.util.*;

public class Main {
    private static Scanner input = new Scanner(System.in);

    public static void main(String args[]) {
        int n = input.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
        int ansMax = 0;
        int ans = 0;
        for (int i = 31; i > 0; i--) {ans=0;
            for (int j = 0; j < n; j++) {
                if (a[j] > i) {
                    ans = 0;
                    continue;
                }
                ans += a[j];
                ans = Math.max(0, ans);
                ansMax = Math.max(ansMax, ans - i);
            }
        }
        System.out.println(ansMax);
        input.close();
    }
}