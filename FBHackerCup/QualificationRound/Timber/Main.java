
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;


public class Main {
    public static void main(String[] args) throws FileNotFoundException, IOException {

        // File file = new
        // File("~/Github/a2oj/FBHackerCup/QualificationRound/Timber/input.txt");
        // File file=new File("input.txt");
        Scanner input = new Scanner(new FileReader("input.txt"));
        int tt, n;
        long prevLen, ans, available;
        tt = input.nextInt();
        String output = "";
        for (int cases = 1; cases <= tt; cases++) {
            n = input.nextInt();
            Pair[] trees = new Pair[n];
            for (int i = 0; i < n; i++) {
                trees[i] = new Pair(input.nextLong(), input.nextLong());
            }
            Arrays.sort(trees);
            HashMap<Long, Long> LBend = new HashMap<>(), RBend = new HashMap<>();
            ans = 0l;
            for (int i = 0; i < n; i++) {
                // System.out.println(trees[i].first);
                prevLen = RBend.getOrDefault((trees[i].first), 0l);
                available = RBend.getOrDefault((trees[i].first + trees[i].second), 0l);
                RBend.put((Long) (trees[i].first + trees[i].second), Math.max(prevLen + trees[i].second, available));
                ans = Math.max(ans, Math.max(prevLen + trees[i].second, available));
            }
            for (int i = n - 1; i >= 0; i--) {
                prevLen = LBend.getOrDefault(trees[i].first, 0l);
                available = LBend.getOrDefault((trees[i].first - trees[i].second), 0l);
                LBend.put((Long) (trees[i].first - trees[i].second), Math.max(prevLen + trees[i].second, available));
                ans = Math.max(ans, Math.max(prevLen + trees[i].second, available));
            }
            for (Map.Entry element : RBend.entrySet()) {
                ans = Math.max(((long) element.getValue() + (long) LBend.getOrDefault(element.getKey(), 0l)), ans);
                // System.out.println(ans);
            }
            for (Map.Entry element : LBend.entrySet()) {
                ans = Math.max(((long) element.getValue() + (long) RBend.getOrDefault(element.getKey(), 0l)), ans);
                // System.out.println(ans);
            }
            output = output.concat("Case #" + cases + ": " + ans + "\n");
            // System.out.println("Case #" + cases + ": " + ans);
            // System.out.println(RBend.get(0l) + " " + LBend.get(0l));
        }
        input.close();
        FileWriter writer = new FileWriter("output.txt");
        writer.write(output);
        writer.close();
    }
}

class Pair implements Comparable<Pair> {
    long first, second;

    Pair(long x, long y) {
        this.first = x;
        this.second = y;
    }

    // @Override
    public int compareTo(Pair p) {
        return (int) (this.first - p.first);
    }
}

/*
 * abstract 8 2 0 5 5 4 2 0 5 9 4 3 0 5 9 3 2 6 5 3 2 2 8 -4 5 8 5 1 4 6 -15 15
 * -9 9 -3 3 5 5 9 9 18 18 8 10 20 20 20 30 20 40 20 50 20 60 20 70 20 80 20 12
 * 13 8 -14 5 2 19 33 10 -31 9 15 21 5 3 -22 16 -6 11 25 12 -40 24 21 18 2
 * -500000000 500000000 500000000 500000000
 */