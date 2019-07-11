import java.util.List;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int c1 = 0, c2 = 0, f1 = 0, f2 = 0;
        for (int n : nums) {
            if (c1 == n) {
                f1++;
                f2 -= (f2 > 0 ? 1 : 0);
            } else if (c2 == n) {
                f2++;
                f1 -= (f1 > 0 ? 1 : 0);
            } else if (f1 == 0) {
                c1 = n;
                f1 = 1;
            } else if (f2 == 0) {
                c2 = n;
                f2 = 1;
            } else {
                f1--;
                f2--;
            }
        }
        List<Integer> ans = new ArrayList<>();
        f1 = 0;
        f2 = 0;
        for (int n : nums) {
            f1 += (c1 == n ? 1 : 0);
            f2 += (c2 == n ? 1 : 0);
        }
        if (f1 > (nums.length / 3))
            ans.add(c1);
        if (f2 > (nums.length / 3))
            ans.add(c2);
        return ans;
    }
}