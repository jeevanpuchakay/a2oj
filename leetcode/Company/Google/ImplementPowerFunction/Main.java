public class Solution {
    public int pow(int x, int n, int d) {
        if(x==0)return 0;
        long ans, twoPower;
        twoPower = x;
        twoPower %= d;
        ans = 1;
        while (n > 0) {
            ans *= ((n & 1)==1 ? twoPower : 1);
            ans %= d;
            twoPower *= twoPower;
            twoPower %= d;
            n = n >> 1;
        }
        if(ans<0)ans+=d;
        return (int) ans;
    }
}
