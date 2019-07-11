import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            int[] numbers = new int[n + 1];
            int[] forIndexes = new int[n + 1];
            int[] freqs = new int[n + 1];
            for (int i = 0; i < n; i++) {
                numbers[i + 1] = input.nextInt();
                freqs[numbers[i + 1]]++;
                forIndexes[numbers[i + 1]] = i + 1;
            }
            // Arrays.sort(numbers);
            int ans = -1;
            for (int i = 1; i <= n; i++) {
                if (freqs[i] == 1) {
                    ans = forIndexes[i];
                    break;
                }
            }
            System.out.println(ans);
        }
        input.close();
    }
}