
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    static int mod = 1000000007;

    public static void main(String[] args) {
        int tt=input.nextInt();
        while(tt-->0){
            int n=input.nextInt();
            String sequence=input.next();
            int[] freq=new int[26];
            boolean suspicious=false;
            char curr_char,prev_char='$';
            for(int i=0;i<n;i++){
                curr_char=sequence.charAt(i);
                if(prev_char==curr_char)continue;
                if(freq[curr_char-'A']!=0){
                    if(curr_char!=prev_char){
                        suspicious=true;
                        break;
                    }
                }
                freq[curr_char-'A']=1;
                prev_char=curr_char;
            }
            if(suspicious)System.out.println("NO");
            else System.out.println("YES");
        }
        input.close();
    }

    public static int modulo(int dividend) {
        while (dividend >= mod)
            dividend -= mod;
        return dividend;
    }

    public static int combination(int n, int r) {
        int ans = 1;
        for (int i = 1; i <= r; i++) {
            ans *= (n - i + 1);
            ans /= i;
        }
        return ans;
    }
}

// class Pair {
// public int first, second;

// Pair() {

// }

// Pair(int x, int y) {
// this.first = x;
// this.second = y;
// }

// }

// class PairComparator implements Comparator<Pair> {
// // sorts by first element in ascending order
// @Override
// public int compare(Pair p1, Pair p2) {
// if (p1.first == p2.first)
// return p1.second < p2.second ? 1 : -1;
// else if (p1.first < p2.first) {
// return 1;
// }
// return -1;
// }
// }