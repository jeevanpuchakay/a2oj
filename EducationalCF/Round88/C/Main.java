
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int h = input.nextInt(), c = input.nextInt(), t = input.nextInt();
            int ans = 2;
            if (h == t) {
                System.out.println(1);
                continue;
            }
            if (t * 2 == (h + c)) {
                System.out.println(2);
                continue;
            }
            double even = (h * (1.00000) + c * (1.000000));
            double diff = even;
            even /= 2;
            double preVavg = h;
            while (Math.abs(((ans * preVavg + (ans + 1) % 2 > 0 ? h : c) / (ans + 1)) - t) <= diff) {
                preVavg = (ans * preVavg + (ans + 1) % 2 > 0 ? h : c) / (ans + 1);
                diff = Math.abs(((ans * preVavg + (ans + 1) % 2 > 0 ? h : c) / (ans + 1)) - t);
                ans++;
            }
            System.out.println(ans);
        }
        input.close();
    }
}