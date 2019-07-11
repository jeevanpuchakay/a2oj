
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int n = input.nextInt();long ans = 0, h = 0, v = 0;
        long[] treeHeights = new long[n];
        for (int i = 0; i < n; i++) {
            treeHeights[i] = input.nextLong();
        }
        Arrays.sort(treeHeights);
        for (int i = n - 1; i >= n / 2; i--) {
            v += treeHeights[i];
        }
        for (int i = 0; i < n / 2; i++) {
            h += treeHeights[i];
        }
        System.out.println(h * h + v * v);
        input.close();
    }
}