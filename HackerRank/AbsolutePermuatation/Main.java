import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the absolutePermutation function below.
    static int[] absolutePermutation(int n, int k) {
        boolean[] track = new boolean[n + 1];
        int[] ans = new int[n];
        for (int i = 1; i <= n; i++) {
            if ((i - k) > 0 && (track[i - k] != true)) {
                ans[i - 1] = i - k;
                track[i - k] = true;
            } else if (((i + k) > n) || (track[i + k] == true)) {
                int[] a = new int[1];
                a[0] = -1;
                return a;
            } else {
                ans[i - 1] = i + k;
                track[i + k] = true;
            }
        }
        return ans;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String[] nk = scanner.nextLine().split(" ");

            int n = Integer.parseInt(nk[0]);

            int k = Integer.parseInt(nk[1]);

            int[] result = absolutePermutation(n, k);

            for (int i = 0; i < result.length; i++) {
                bufferedWriter.write(String.valueOf(result[i]));

                if (i != result.length - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
