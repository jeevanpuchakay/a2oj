
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            long ans = 0, count;
            int n = input.nextInt(), m = input.nextInt(), k = input.nextInt(), pos,nextPos;
            int[] inputNumbers = new int[n];
            HashMap<Integer, Integer> freq = new HashMap<>();
            for (int i = 0; i < n; i++) {
                inputNumbers[i] = input.nextInt();
                freq.put(inputNumbers[i], freq.getOrDefault(inputNumbers[i], 0));
            }
            Arrays.sort(inputNumbers);
            for (int i = 0; m + i - 1 < n; i++) {
                pos = getFarthestIdx(inputNumbers, i, n, m, k);
                if (pos == -1)
                    continue;
                count = combination(pos - i, m - 1);
                ans = modulo(ans + count);
            }
            System.out.println(ans);
        }
        input.close();
    }

    public static int getFarthestIdx(int[] inputNumbers, int currPos, int n, int m, int threshold) {
        int ans = -1, mid, start = m + currPos - 1, end = n - 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (inputNumbers[mid] - inputNumbers[currPos] <= threshold) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }

    public static long modulo(long dividend) {
        while (dividend >= mod)
            dividend -= mod;
        return dividend;
    }

    public static long combination(int n, int r) {
        long ans = 1;
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