
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int curr, n = input.nextInt();
            ArrayList<Integer>[] positions = new ArrayList[n + 1];
            for (int i = 1; i <= n; i++) {
                positions[i] = new ArrayList<>();
                positions[i].add(-1);
            }
            for (int i = 0; i < n; i++) {
                curr = input.nextInt();
                positions[curr].add(i);
            }
            for (int i = 1; i <= n; i++) {
                positions[i].add(n);
            }
            int ans = n, currAns;
            for (int i = 1; i <= n; i++) {
                if(positions[i].size()==2)continue;
                currAns = 0;
                for (int j = 1; j < positions[i].size(); j++) {
                    if ((positions[i].get(j) - 1 - positions[i].get(j - 1) - 1 + 1) > 0) {
                        currAns++;
                    }
                }
                ans = Math.min(currAns, ans);
                // System.out.println(i + " " + currAns);
            }
            System.out.println(ans);
        }
        input.close();
    }
}