package Codechef.LongChallenges.June2k20.EvenMatrix;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt();
            int c = 1;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 1) {
                    for (int j = n-1; j >=0; j--) {
                        System.out.print((j + c) + " ");
                    }
                    c += n;
                    System.out.println("");

                } else {
                    for (int j = 0; j < n; j++) {
                        System.out.print((c+j) + " ");
                    }
                    System.out.println("");c+=n;
                }
            }
        }
        input.close();
    }
}