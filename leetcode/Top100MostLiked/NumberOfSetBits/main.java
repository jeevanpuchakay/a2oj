class Solution {
    public int[] countBits(int num) {
        int[] prev = new int[num + 1];
        prev[0] = 0;
        int start = 1;
        while (start <= num) {
            prev[start] = 1 + prev[start & (start - 1)];
            start++;
        }
        return prev;
    }
}