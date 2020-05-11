import java.util.*;

class Solution {
    List<List<Integer>> ans = new ArrayList<>();
    HashMap<Integer, Integer> feqs = new HashMap<>();
    int maxLen;

    public List<List<Integer>> permuteUnique(int[] nums) {
        this.maxLen = nums.length;
        for (int each : nums) {
            if (feqs.containsKey(each)) {
                feqs.put(each, feqs.get(each) + 1);
            } else {
                feqs.put(each, 1);
            }
        }
        List<Integer> temp = new ArrayList<>();
        go(0, temp);
        return this.ans;
    }

    void go(int pos, List<Integer> temp) {
        if (pos == this.maxLen) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        Set<Integer> keys = this.feqs.keySet();
        for (Integer each : keys) {
            if (this.feqs.get(each) > 0) {
                temp.add(each);
                this.feqs.put(each, this.feqs.get(each) - 1);
                go(pos + 1, temp);
                this.feqs.put(each, this.feqs.get(each) + 1);
                temp.remove(pos);
            }
        }
        return;
    }
}