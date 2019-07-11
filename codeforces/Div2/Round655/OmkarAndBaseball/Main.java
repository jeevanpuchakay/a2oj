package codeforces.Div2.Round655.OmkarAndBaseball;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int temp, n = input.nextInt(), count = 0, pos = 1;
            while (pos <=n) {
                temp = input.nextInt();
                if (temp != pos) {
                    count++;
                }
                pos++;
            }
            if (count == n)
                System.out.println(1);
            else if (count == 0)
                System.out.println(0);
            else
                System.out.println(2);
        }

        input.close();
    }
}