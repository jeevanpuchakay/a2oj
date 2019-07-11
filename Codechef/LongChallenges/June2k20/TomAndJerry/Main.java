package Codechef.LongChallenges.June2k20.TomAndJerry;
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        long cases = input.nextLong();
        while (cases-- > 0) {
            long n = input.nextLong();
            long k = n, p = 0;
            if (n % 2 == 1) {
                System.out.println(n / 2);
                continue;
            }

            while (k > 0) {
                if (k % 2 == 0) {
                    p++;
                    k /= 2;
                } else
                    break;
            }
            p++;
            long ans = 0;
            // for (long i = 1; i * (1 << p) < n; i++) {
            //     ans++;
            // }
            ans+=(n/(1<<p));
            System.out.println(ans);
        }
        input.close();
    }
}