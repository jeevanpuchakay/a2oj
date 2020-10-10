
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            long l = input.nextInt(), r = input.nextInt();
            if (l == r) {
                System.out.println("-1" + " " + "-1");
            } else if (r / l >= 2) {
                System.out.println(l + " " + 2 * l);
            } else {
                System.out.println("-1" + " " + "-1");
            }
        }
        input.close();
    }
}