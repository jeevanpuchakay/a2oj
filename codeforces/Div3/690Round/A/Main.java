
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            int[] given = new int[n];
            for (int i = 0; i < n; i++)
                given[i] = input.nextInt();
            int start = 0, end = n - 1;
            boolean turn = true;
            while (start <= end) {
                if (turn)
                    System.out.print(given[start++]+" ");
                else
                    System.out.print(given[end--]+" ");
                turn = !turn;
            }
            System.out.println();
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