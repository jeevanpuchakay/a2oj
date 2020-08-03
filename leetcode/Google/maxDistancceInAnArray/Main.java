import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;

public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int maximumGap(final int[] nums) {
        int n = nums.length;
        int[][] copyofArr = new int[n][2];
        for (int i = 0; i < n; i++) {
            copyofArr[i][0] = nums[i];
            copyofArr[i][1] = i;
        }
        Arrays.sort(copyofArr, new Comparator<int[]>() {
            public int compare(int[] a1, int[] a2) {
                if (a1[0] > a2[0]) {
                    return 1;
                }
                else if(a1[0]==a2[0])return 0;
                return -1;
            }
        });
        // int[] indexmax = new int[n];
        // System.out.println(copyofArr[n - 1][0]+"lol");
        int curMax = 0, ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            // if (curMax > pos.get(nums[i])) {
            ans = Math.max(ans, curMax - copyofArr[i][1]);
            // }
            curMax = Math.max(curMax, copyofArr[i][1]);
            // System.out.println(curMax);
        }
        return ans;
    }
}
