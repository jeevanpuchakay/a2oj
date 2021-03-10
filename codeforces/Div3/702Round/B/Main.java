
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt(), c0 = 0, c1 = 0, c2 = 0, curr, ans = 0;
            for (int i = 0; i < n; i++) {
                curr = input.nextInt();
                if (curr % 2 == 0)
                    c0++;
                else if (curr % 2 == 1)
                    c1++;
                else
                    c2++;
            }
            if (c2 > c1 && c2 > c0) {
                if(c0>c1){
                    ans=Math.max(a, b)
                }
            } else if (c1 > c2 && c1 > c0) {
                ans = ((n / 3 - c2) + 2 * (n / 3 - c0));
            } else {
                ans = ((n / 3 - c0) + 2 * (n / 3 - c1));
            }
            System.out.println(ans);
        }
        input.close();
    }

    public static int modulo(int dividend) {
        while (dividend >= mod)
            dividend -= mod;
        return dividend;
    }

    public static int combination(int n, int r) {
        int ans = 1;
        for (int i = 1; i <= r; i++) {
            ans *= (n - i + 1);
            ans /= i;
        }
        return ans;
    }
}

// class Pair {
// public int first, second;

// Pair() {

// }

// Pair(int x, int y) {
// this.first = x;
// this.second = y;
// }

// }

// class PairComparator implements Comparator<Pair> {
// // sorts by first element in ascending order
// @Override
// public int compare(Pair p1, Pair p2) {
// if (p1.first == p2.first)
// return p1.second < p2.second ? 1 : -1;
// else if (p1.first < p2.first) {
// return 1;
// }
// return -1;
// }
// }