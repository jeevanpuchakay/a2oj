import java.util.*;

class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        int n = (int) groupSizes.length;
        ArrayList<Integer> temp[] = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            temp[groupSizes[i]].add(i);
        }
        List<List<Integer>> ans;
        List<Integer> tm;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            count = 0;

            for (Integer num : temp[i]) {
                tm.add(count, num);
                count++;
                if (count == i) {
                    ans.add(tm);
                    tm.clear();
                    count = 0;
                }
            }
        }
        return ans;
    }
}