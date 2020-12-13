
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt(), m = input.nextInt(), d = input.nextInt() + 1, prevBreak = Integer.MIN_VALUE, day = 0;
        Pair[] days = new Pair[n];
        boolean isChanged;
        for (int i = 0; i < n; i++) {
            days[i] = new Pair(input.nextInt(), i);
        }
        Arrays.sort(days, new PairComparator());
        // for (int i = 0; i < n; i++) {
        //     System.out.println(days[i].first + " " + days[i].second);
        // }
        int[] ans = new int[n];
        isChanged = true;
        while (isChanged) {
            isChanged = false;
            prevBreak = Integer.MIN_VALUE;
            day++;
            for (int i = 0; i < n; i++) {
                if (ans[days[i].second] != 0)
                    continue;
                if (prevBreak + d <= days[i].first) {
                    isChanged = true;
                    prevBreak = days[i].first;
                    ans[days[i].second] = day;
                }
            }
        }
        System.out.println(day - 1);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
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
    // sorts by first element in ascending order
    @Override
    public int compare(Pair p1, Pair p2) {
        if (p1.first == p2.first)
            return p1.second < p2.second ? 1 : -1;
        else if (p1.first < p2.first) {
            return -1;
        }
        return 1;
    }
}