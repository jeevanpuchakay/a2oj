import java.util.HashMap;

class Solution {
    public int fourSumCount(int[] A, int[] B, int[] C, int[] D) {
        int n = A.length;
        HashMap<Integer, Integer> track = new HashMap<>();
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp = A[i] + B[j];
                if (track.containsKey(temp)) {
                    track.put(temp, track.get(temp)+1);
                } else {
                    track.put(temp, 1);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp = C[i] + D[j];
                if (track.containsKey(-temp)) {
                    ans += track.get(-temp);
                }
            }
        }
        return ans;
    }
}