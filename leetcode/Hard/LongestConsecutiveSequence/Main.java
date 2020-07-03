class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<>();
        for (int each : nums) {
            set.add(each);
        }
        int ans = 0, top, least, highest;
        while (!set.isEmpty()) {
            top = set.iterator().next();
            set.remove(top);
            least = top - 1;
            while (set.contains(least)) {
                set.remove(least);
                least--;
            }
            highest = top + 1;
            while (set.contains(highest)) {
                set.remove(highest);
                highest++;
            }
            ans = Math.max(ans, highest - least - 1);
        }
        return ans;
    }
}