
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt(), k = input.nextInt();
            // int[] rem = new int[k];
            HashMap<Integer, Integer> rem = new HashMap<>();

            long count = 0;int temp;long remainder = Integer.MAX_VALUE;
            // for (int i = 0; i < k; i++)
            // rem[i] = 0;
            for (int i = 0; i < n; i++) {
                temp = input.nextInt();
                if (rem.containsKey(temp % k)) {
                    rem.put((temp) % k, rem.get(temp % k) + 1);
                } else {
                    rem.put(temp % k, 1);
                }
                // rem[temp % k]++;
                if (temp % k != 0) {
                    if (count < rem.get(temp % k)) {
                        count = rem.get(temp % k);
                        remainder = temp % k;
                    } else if (count == rem.get(temp % k)) {
                        remainder = Math.min(remainder, temp % k);
                    }
                }
            }
            // System.out.println(Arrays.toString(rem)+" "+count+" "+remainder);
            if (count == 0) {
                System.out.println(0);
            } else {
                System.out.println((count - 1) * k + (k - remainder) + 1);
            }

        }
        input.close();
    }
}