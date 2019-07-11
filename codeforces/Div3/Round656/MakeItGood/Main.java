
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }
            int pos = n - 1;
            while ((pos > 0) && (a[pos - 1] >= a[pos]))
                pos--;
            while ((pos > 0) && (a[pos - 1] <= a[pos]))
                pos--;
            System.out.println(pos);
        }

        input.close();
    }
}