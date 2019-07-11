
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt(), sum = 0, targetSum, ans = -1;
            int[] numbers = new int[n];
            for (int i = 0; i < n; i++) {
                numbers[i] = input.nextInt();
                sum += numbers[i];
            }
            for (int i = n; i >= 1; i--) {
                if (sum % i != 0)
                    continue;
                targetSum = sum / i;
                if (isPossible(numbers, n, targetSum, i)) {
                    ans = n - i;
                    break;
                }
            }
            System.out.println(ans);
        }
        input.close();
    }

    public static boolean isPossible(int[] numbers, int n, int targetSum, int targetSize) {
        int currSize = 0, currSum = 0;
        for (int i = 0; i < n; i++) {
            if (numbers[i] + currSum > targetSum)
                return false;
            currSum += numbers[i];
            if (currSum == targetSum) {
                currSize++;
                currSum = 0;
            }
            if (currSize > targetSize)
                return false;
        }
        if (currSum != 0 || targetSize != currSize)
            return false;
        return true;
    }
}

class Pair {
    public int first, second;

    Pair() {

    }

    Pair(int x, int y) {
        this.first = x;
        this.second = y;
    }

}

class PairComparator implements Comparator<Pair> {
    // sorts by first element in ascending order
    @Override
    public int compare(Pair p1, Pair p2) {
        if (p1.first == p2.first)
            return p1.second < p2.second ? 1 : -1;
        else if (p1.first < p2.first) {
            return 1;
        }
        return -1;
    }
}