
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt(), n;
        while (tt-- > 0) {
            n = input.nextInt();
            int ans = allPermutations(n, 0, 9, 1);
            if (ans == 0) {
                System.out.println(-1);
            } else {
                System.out.println(ans);
            }
        }
        input.close();
    }

    public static int allPermutations(int currN, int number, int currInteger, int tenPowers) {
        if (currN == 0)
            return number;
        if (currInteger == 0)
            return 0;
        int ans = 0;
        for (int i = currInteger; i >= 0; i--) {
            if (i > currN)
                continue;
            ans = allPermutations(currN - i, i * tenPowers + number, i - 1, tenPowers * 10);
            if (ans != 0)
                return ans;
        }
        return 0;
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