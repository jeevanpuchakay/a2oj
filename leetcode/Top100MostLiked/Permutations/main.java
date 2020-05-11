
import java.util.*;

class Solution {
    List<List<Integer>> ans = new ArrayList<List<Integer>>();
    int maxLen;
    Boolean[] visited;

    public List<List<Integer>> permute(int[] nums) {
        List<Integer> temp = new ArrayList<Integer>();
        this.maxLen = nums.length;
        visited = new Boolean[this.maxLen];
        for(int i=0;i<this.maxLen;i++)visited[i]=false;
        go(nums, temp, 0);
        return ans;
    }

    void go(int[] nums, List<Integer> temp, int pos) {
        if (pos == this.maxLen) {
            ans.add(new ArrayList<Integer>(temp));
            return;
        }
        for (int i = 0; i < this.maxLen; i++) {
            if (!this.visited[i]) {
                this.visited[i] = true;
                temp.add(nums[i]);
                go(nums, temp, pos + 1);
                temp.remove(pos);
                this.visited[i] = false;
            }
        }

    }
}