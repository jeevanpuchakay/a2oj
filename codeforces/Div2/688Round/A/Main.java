
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int verticalT = input.nextInt(), horizontalT = input.nextInt(), col, row, ans = 0;
            int[][] timeOfArrivalOfHorizontal = new int[100 + 1][100 + 1],
                    timeOfArrivalOfVertical = new int[100 + 1][100 + 1];

            for (int i = 0; i <= 100; i++) {
                for (int j = 0; j <= 100; j++) {
                    timeOfArrivalOfHorizontal[i][j] = timeOfArrivalOfVertical[i][j] = -1;
                }
            }
            for (int i = 0; i < verticalT; i++) {
                col = input.nextInt();
                for (int j = 100; j > 0; j--) {
                    timeOfArrivalOfVertical[j][col] = 100 - j + 1;
                }
            }
            for (int i = 0; i < horizontalT; i++) {
                row = input.nextInt();
                for (int j = 1; j <= 100; j++) {
                    timeOfArrivalOfHorizontal[100 - row + 1][j] = j;
                }
            }
            for (int i = 1; i <= 100; i++) {
                for (int j = 1; j <= 100; j++) {
                    if (timeOfArrivalOfHorizontal[i][j] == timeOfArrivalOfVertical[i][j]
                            && timeOfArrivalOfVertical[i][j] != -1) {
                        ans++;
                    }
                }
            }
            System.out.println(ans);
        }

        input.close();
    }
}