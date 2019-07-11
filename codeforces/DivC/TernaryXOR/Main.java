
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt(), pos = 0;
            String left = "", right = "", ternaryString = input.next();
            while (pos < n && ternaryString.charAt(pos) != '1') {
                if (ternaryString.charAt(pos) == '2') {
                    left += '1';
                    right += '1';
                } else {
                    left += '0';
                    right += '0';
                }
                pos++;
            }
            if (pos < n) {
                left += '1';
                right += '0';
                pos++;
            }
            for (; pos < n; pos++) {
                if (ternaryString.charAt(pos) == '1') {
                    right += '1';
                    left += '0';
                } else if (ternaryString.charAt(pos) == '0') {
                    left += '0';
                    right += '0';
                } else {
                    left += '0';
                    right += '2';
                }
            }
            System.out.println(left);
            System.out.println(right);
        }
        input.close();
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