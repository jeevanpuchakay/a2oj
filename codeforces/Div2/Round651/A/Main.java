package codeforces.Div2.Round651.A;

import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = input.nextInt();
        while (cases-- > 0) {
            int n = input.nextInt();
            System.out.println(n / 2);
        }
        input.close();
    }
}