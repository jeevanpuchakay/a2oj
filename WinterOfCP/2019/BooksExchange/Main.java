
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            int[] successor = new int[n + 1];
            for (int i = 1; i <= n; i++)
                successor[i] = input.nextInt();

        }
        input.close();
    }
}

class Graph {
    public LinkedList<Integer> adjlist[];

    Graph() {

    }

    Graph(int n) {
        adjlist = new LinkedList[n];
        for (int i = 0; i < n; i++) {
            adjlist[i] = new LinkedList<>();
        }
    }
    void addEdge(int from,int to){
        
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