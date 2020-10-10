
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int[] a = new int[3];
            a[0] = input.nextInt();
            a[1] = input.nextInt();
            a[2] = input.nextInt();
            Arrays.sort(a);
            if ((a[1] == a[2])) {
                System.out.println("YES");
                System.out.println(a[0] + " " + a[0] + " " + a[2]);
            } else {
                System.out.println("NO");
            }
        }

        input.close();
    }
}