
package Codechef.Medium.OnlineShopping;

// package Codechef.Medium.OnlineShopping;

import java.util.*;

class main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tests, n, m;
        tests = in.nextInt();
        List<List<Integer>> prices;// = new ArrayList<List<Integer>>();
        List<List<Integer>> disc;// = new ArrayList<List<Integer>>();
        ArrayList<ArrayList<Integer>> ans;// = new ArrayList<List<Integer>>();

        while (tests > 0) {
            tests--;
            n = in.nextInt();
            m = in.nextInt();
            prices = new ArrayList<List<Integer>>();
            disc = new ArrayList<List<Integer>>();
            ans = new ArrayList<>(n);
            for (int i = 0; i < n; i++) {
                prices.add(new ArrayList<Integer>());
                for (int j = 0; j < m; j++) {
                    prices.get(i).add(in.nextInt());
                }
            }
            for (int i = 0; i < n; i++) {
                disc.add(new ArrayList<Integer>());
                for (int j = 0; j < m; j++) {
                    disc.get(i).add(in.nextInt());
                }
            }
            ans.add(new ArrayList<Integer>());
            int minLast = 1000000000 + 9;
            for (int i = 0; i < m; i++) {
                ans.get(0).add(prices.get(0).get(i));
                minLast = Math.min(prices.get(0).get(i), minLast);
            }
            for (int i = 01; i < n; i++) {
                ans.add(new ArrayList<Integer>());
                for (int j = 0; j < m; j++) {
                    ans.get(i).add(
                            Math.min(ans.get(i - 1).get(j) + Math.max(prices.get(i).get(j) - disc.get(i - 1).get(j), 0),
                                    minLast + prices.get(i).get(j)));
                }
                minLast = 1000000000 + 9;
                for (int j = 0; j < m; j++) {
                    minLast = Math.min(minLast, ans.get(i).get(j));
                }
            }
            System.out.println(minLast);
        }
    }
}

/*
 * abstract 2 2 2 3 4 1 2 1 0 0 1 2 4 1 2 3 4 4 3 2 1 2 3 2 1 1 2 1 1
 **/