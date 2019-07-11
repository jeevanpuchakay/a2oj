package codeforces.Div3.Round644.C;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cases = input.nextInt();
        int n;
        int[] nums;
        while (cases-- > 0) {
            n = input.nextInt();
            nums = new int[n];
            for (int i = 0; i < n; i++) {
                nums[i] = input.nextInt();
            }
            Arrays.sort(nums);
            int eves = 0, ods = 0;
            for (int i = 0; i < n; i++) {
                if ((i < n - 1) && (nums[i] + 1 == nums[i + 1])) {
                    i++;
                } else if ((i < n - 1) && (nums[i] % 2 == nums[i + 1] % 2)) {
                    i++;
                } else if (nums[i] % 2 == 0) {
                    eves++;
                } else {
                    ods++;
                }
            }
            if ((eves % 2 == 0) && (ods % 2 == 0)) {
                System.out.println("YES");
                continue;
            }
            eves = ods = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] % 2 == 0) {
                    eves++;
                } else {
                    ods++;
                }
            }

            if ((eves % 2 == 0) && (ods % 2 == 0)) {
                System.out.println("YES");
                continue;
            } else {
                System.out.println("NO");
            }

        }
    }
}