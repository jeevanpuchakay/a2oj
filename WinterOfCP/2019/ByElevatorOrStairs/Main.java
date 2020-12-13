
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt(), c = input.nextInt(), stairCost = 0, liftCost = c, cStairCost, cLiftCost=c;
        int[][] costToClimb = new int[n][2];
        for (int i = 0; i < n - 1; i++) {
            costToClimb[i][0] = input.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            costToClimb[i][1] = input.nextInt();
        }
        System.out.print(0 + " ");
        for (int i = 0; i < n - 1; i++) {
            cStairCost = stairCost;
            cLiftCost = liftCost;
            stairCost = Math.min(cStairCost, cLiftCost) + costToClimb[i][0];
            liftCost = Math.min(cStairCost + c + costToClimb[i][1], cLiftCost + costToClimb[i][1]);
            System.out.print(Math.min(stairCost, liftCost)+" ");
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
            return 1;
        }
        return -1;
    }
}