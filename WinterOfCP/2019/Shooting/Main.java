
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int n = input.nextInt();
        Pair[] durability = new Pair[n];
        for (int i = 0; i < n; i++) {
            durability[i] = new Pair(input.nextInt(), i);
        }
        Arrays.sort(durability, new PairComparator());
        // System.out.println(durability[0].first);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (durability[i].first * (i) + 1);
        }
        System.out.println(ans);
        for (int i = 0; i < n; i++) {
            System.out.print((durability[i].second + 1) + " ");
            // ans += (durability[i].first * (i + 1) + 1);
        }
        System.out.println();
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

    @Override
    public int compare(Pair p1, Pair p2) {
        if (p1.first < p2.first) {
            return 1;
        }
        return -1;
    }
}