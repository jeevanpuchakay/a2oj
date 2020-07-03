class Solution {
    public int maxArea(int[] height) {
        int ans = 0;
        int n = height.length;
        int start = 0, end = n - 1;
        ans = (n - 1) * (Math.min(height[0], height[n - 1]));
        while (start < end) {
            ans = Math.max(ans, (end - start) * Math.min(height[start], height[end]));
            if (height[start] < height[end])
                start++;
            else
                end--;
        }
        return ans;
    }
}