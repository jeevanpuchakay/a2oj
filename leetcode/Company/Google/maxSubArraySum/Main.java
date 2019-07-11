import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

class Pair {
    long x;
    int y, z;

    Pair(long a, int b, int c) {
        this.x = a;
        this.y = b;
        this.z = c;
    }
}

class PairComparator implements Comparator<Pair> {
    public int compare(Pair a, Pair b) {
        if (a.x > b.x)
            return -1;
        else if (a.x == b.x) {
            if ((a.z - a.y) == (b.z - b.y)) {
                if (a.y < b.y)
                    return -1;
                else if (a.y == b.y)
                    return 0;
                else
                    return 1;
            } else if ((a.z - a.y) > (b.z - b.y))
                return -1;
            return 0;
        } else {
            return 1;
        }
    }
}

public class Solution {
    public int[] maxset(int[] nums) {
        int n = nums.length;
        List<Pair> sums = new ArrayList<>();
        long sum = -1l;
        int start = -1, end = -1;
        for (int i = 0; i < n; i++) {
            if ((nums[i] < 0) && (sum < 0))
                continue;
            else if (nums[i] < 0) {
                sums.add(new Pair(sum, start, i - 1));
                start = -1l;
                sum = end = -1;
            } else {
                if (sum < 0) {
                    sum = nums[i];
                    start = i;
                } else {
                    sum += nums[i];
                }
            }
        }
        if (sum >= 0) {
            sums.add(new Pair(sum, start, n - 1));
        }
        Collections.sort(sums, new PairComparator());
        if (sums.size() == 0)
            return new int[0];
        Pair temp = sums.get(0);
        int[] ans = new int[temp.z - temp.y + 1];
        for (int i = temp.y; i <= temp.z; i++) {
            ans[i - temp.y] = nums[i];
        }
        return ans;
    }
}
