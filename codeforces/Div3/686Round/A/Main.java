// package Div3.686Round.A;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            System.out.print(n + " ");
            for (int i = 1; i < n; i++)
                System.out.print(i + " ");
            System.out.println();
        }
        input.close();
    }
}