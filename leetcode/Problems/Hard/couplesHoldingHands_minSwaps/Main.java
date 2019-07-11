import java.util.HashMap;

class Solution {
    public int minSwapsCouples(int[] row) {
        int n = row.length;
        int ans = 0;
        HashMap<Integer, Integer> mapping = new HashMap<>();
        for (int i = 0; i < n; i += 2) {
            mapping.put(row[i], row[i + 1]);
            mapping.put(row[i + 1], row[i]);
        }
        int temp, currNeighborOfI, neighborOfIPlus1;
        for (int i = 0; i < 2 * n; i += 2) {
            temp = mapping.get(i);
            if (temp != i + 1) {
                currNeighborOfI = mapping.get(i + 1);
                mapping.put(i, i + 1);
                mapping.put(i + 1, i);
                mapping.put(currNeighborOfI, temp);
                mapping.put(temp, currNeighborOfI);
                ans++;
            }
        }
        return ans;
    }
}