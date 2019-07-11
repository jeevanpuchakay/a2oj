
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt(), ans = Integer.MAX_VALUE;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0)
                ans = Math.min(ans, 2 * (i + n / i));
        }
        System.out.println(ans);
        input.close();
    }
}