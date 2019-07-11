public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int[] searchRange(final int[] nums, int target) {
        int n = nums.length, low, high, mid, startAns, endAns;
        int[] ans = new int[2];
        ans[0] = ans[1] = -1;
        low = 0;
        high = n - 1;
        startAns = Integer.MAX_VALUE;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                startAns = Math.min(startAns, mid);
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        low = 0;
        high = n - 1;
        endAns = Integer.MIN_VALUE;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                endAns = Math.max(endAns, mid);
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (startAns != Integer.MAX_VALUE)
            ans[0] = startAns;
        if (endAns != Integer.MIN_VALUE)
            ans[1] = endAns;
        return ans;

    }
}
