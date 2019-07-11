
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            long k = input.nextInt();
            long[] programmersStrength = new long[n];
            for (int i = 0; i < n; i++) {
                programmersStrength[i] = input.nextInt();
            }
            Arrays.sort(programmersStrength);
            long tLen = 0, minEle = 0, cTeams = 0;
            for (int i = n - 1; i >= 0; i--) {
                minEle = programmersStrength[i];
                tLen++;
                if (tLen >= ((double) k )/ minEle) {
                    cTeams++;
                    minEle = tLen = 0;
                }
            }
            System.out.println(cTeams);
        }
        input.close();
    }
}