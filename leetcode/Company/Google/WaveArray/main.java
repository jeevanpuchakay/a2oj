import java.util.Arrays;

public class Solution {
    public int[] wave(int[] nums) {
        int n = nums.length, temp;
        Arrays.sort(nums);
        for (int i = 1; i < n; i += 2) {
            temp = nums[i - 1];
            nums[i - 1] = nums[i];
            nums[i] = temp;
        }
        return nums;
    }
}
