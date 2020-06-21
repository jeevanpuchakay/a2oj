import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    static int bigRows, bigCols, patRows, patCols;
    static String[] grid;
    static String[] pattern;

    static boolean searchPat(int gRow, int gCol, int pRow, int pCol) {
        if (((pRow) == (patRows)) && ((pCol) == patCols)) {
            return true;
        }
        if ((gRow >= bigRows) || (gCol >= bigCols) || (pRow >= patRows) || (pCol >= patCols)) {
            System.out.println("0 " + gRow + " " + gCol + " ");
            return false;
        }
        if (grid[gRow].charAt(gCol) != pattern[pRow].charAt(pCol)) {
            System.out.println(
                    "1 " + grid[gRow].charAt(gCol) + " " + pattern[pRow].charAt(pCol) + " " + pRow + " " + pCol);
            return false;
        }

        return searchPat(gRow + 1, gCol, pRow + 1, pCol) && searchPat(gRow, gCol + 1, pRow, pCol + 1);

    }

    // Complete the gridSearch function below.
    static String gridSearch(String[] G, String[] P) {
        grid = G;
        pattern = P;
        bigRows = grid.length;
        bigCols = grid[0].length();
        patRows = pattern.length;
        patCols = pattern[0].length();
        for (int i = 0; i < bigRows; i++) {
            for (int j = 0; j < bigCols; j++) {
                if (searchPat(i, j, 0, 0)) {
                    return "YES";
                }
            }
        }
        return "NO";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String[] RC = scanner.nextLine().split(" ");

            int R = Integer.parseInt(RC[0]);

            int C = Integer.parseInt(RC[1]);

            String[] G = new String[R];

            for (int i = 0; i < R; i++) {
                String GItem = scanner.nextLine();
                G[i] = GItem;
            }

            String[] rc = scanner.nextLine().split(" ");

            int r = Integer.parseInt(rc[0]);

            int c = Integer.parseInt(rc[1]);

            String[] P = new String[r];

            for (int i = 0; i < r; i++) {
                String PItem = scanner.nextLine();
                P[i] = PItem;
            }

            String result = gridSearch(G, P);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
