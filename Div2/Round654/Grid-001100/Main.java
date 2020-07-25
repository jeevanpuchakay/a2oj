
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        int[][] mat;
        while (tt-- > 0) {
            int n = input.nextInt();
            int k = input.nextInt();
            if (k % n == 0) {
                System.out.println(0);
            } else {
                System.out.println(2);
            }
            int i = 0, j = 0;
            mat = new int[n][n];
            while (k-- > 0) {
                mat[i][j] = 1;
                j++;
                i++;
                j %= n;
                if (i == n) {
                    i = 0;
                    j++;
                    j %= n;
                }
            }

            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    System.out.print(mat[i][j]);
                }
                System.out.print("\n");
            }
        }
        input.close();
    }
}