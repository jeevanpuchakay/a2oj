
//Incomplete



import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    /*
     * 4 9 2 3 5 7 8 1 5
     */

    // Complete the formingMagicSquare function below.
    static int formingMagicSquare(int[][] s) {
        int sum = 0;
        boolean found = false;
        int temp, lIndx1, lIndx2, last;
        boolean[][] track = new boolean[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                track[i][j] = false;
            }
        }
        for (int num = 9; num >= 0; num--) {
            temp = 10;
            found = false;
            lIndx1 = -1;
            lIndx2 = -1;
            last = 10;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if ((track[i][j] == false) && (s[i][j] == num)) {
                        track[i][j] = true;
                        found = true;
                        break;
                    } else if (track[i][j] == false) {
                        if (Math.abs(s[i][j] - num) < temp) {
                            lIndx1 = i;
                            lIndx2 = j;
                            temp = Math.abs(s[i][j] - num);
                            last = s[i][j];
                        } else if (Math.abs(s[i][j] - num) == temp) {
                            if (last < s[i][j]) {
                                lIndx1 = i;
                                lIndx2 = j;
                                last = s[i][j];

                            }
                        }
                    }
                }
                if (found) {
                    break;
                }
            }
            if (!found) {
                sum += temp;
                track[lIndx1][lIndx2] = true;
                // System.out.println(num + " " + lIndx1 + " " + lIndx2 + " " + temp);
            }
        }
        return sum;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] s = new int[3][3];

        for (int i = 0; i < 3; i++) {
            String[] sRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 3; j++) {
                int sItem = Integer.parseInt(sRowItems[j]);
                s[i][j] = sItem;
            }
        }

        int result = formingMagicSquare(s);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
