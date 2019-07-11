
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int tt = input.nextInt();
        while (tt-- > 0) {
            long a, b, n, s;
            a = input.nextLong();
            b = input.nextLong();
            n = input.nextLong();
            s = input.nextLong();
            s -= Math.min((s / n) * n, a * n);
            if (s <= b) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        input.close();
    }
}