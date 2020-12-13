
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n, k;
        String ballons;
        boolean ans = true;
        n = input.nextInt();
        k = input.nextInt();
        ballons = input.next();
        int[] freq = new int[26];
        for (int i = 0; i < n; i++) {
            freq[ballons.charAt(i) - 'a']++;
            if (freq[ballons.charAt(i) - 'a'] > k) {
                ans = false;
                break;
            }
        }
        System.out.println(ans ? "YES" : "NO");
        input.close();
    }
}