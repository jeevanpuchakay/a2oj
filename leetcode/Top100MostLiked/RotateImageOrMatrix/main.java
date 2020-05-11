import java.util.*;

class Solution {
    void swap(int a, int b) {
        a ^= b;
        b ^= a;
        a ^= b;
        return;
    }

    public void rotate(int[][] matrix) {
        int n = matrix.length;
        if (n <= 1)
            return;
        for (int i = 0; i < (n + 1) / 2; i++) {
            for (int j = 0; j < (n) / 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][n - 1 - i];
                matrix[j][n - 1 - i] = temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[n - 1 - i][n - 1 - j];
                matrix[n - 1 - i][n - 1 - j] = temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = temp;
            }
            for (int[] row : matrix) {
                System.out.println(Arrays.toString(row));
            }
        }
        return;
    }
}