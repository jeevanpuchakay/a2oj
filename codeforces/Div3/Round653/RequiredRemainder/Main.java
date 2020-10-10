
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int x = input.nextInt(), y = input.nextInt(), n = input.nextInt();
            if (n % x >= y) {
                System.out.println(n - n % x + y);
            } else {
                System.out.println(n - n % x + y - x);
            }

        }
        input.close();
    }
}