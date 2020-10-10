
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            if ((n & (n - 1)) == 0) {
                if (n != 1)
                    System.out.println(-1);
                else
                    System.out.println(0);
            } else {
                int ans = 0;
                while (n % 6 == 0 || n % 3 == 0) {
                    if (n % 6 == 0) {
                        n /= 6;
                        ans++;
                    } else if (n % 3 == 0) {
                        ans += 2;
                        n /= 3;
                    }
                }
                if (n == 1) {
                    System.out.println(ans);
                } else {
                    System.out.println(-1);
                }
            }
        }
        input.close();
    }
}