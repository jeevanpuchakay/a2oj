import java.util.*;

class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                if (a[0] < b[0])
                    return 1;
                return -1;
            }
        });
        int pos = 0, n = intervals.length;
        // int[][] ans = new int[n][2];
        List<int[]> ans = new ArrayList<>();
        // ans[[0] = intervals[0][0];
        // ans[0][1] = intervals[0][1];
        ans.add(intervals[0]);
        for (int i = 1; i < n; i++) {
            int[] temp = ans.get(pos);
            if (intervals[i][0] <= temp[1]) {
                ans.get(pos)[1] = Math.max(temp[1], intervals[i][1]);
            } else {
                pos++;
                ans.add(intervals[i]);
            }
        }
        return ans.toArray();
    }
}