
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int n, b, a, currB, currA, pos = 0;
        n = input.nextInt();
        b = input.nextInt();
        a = input.nextInt();
        int[] isLight = new int[n];
        for (int i = 0; i < n; i++)
            isLight[i] = input.nextInt();
        currA = a;
        currB = b;
        for (; pos < n; pos++) {
            if (currA == 0 && currB == 0)
                break;
            if (isLight[pos] == 1) {
                if (currA == a || currB == 0) {
                    currA--;
                } else {
                    currA++;
                    currB--;
                }
            } else if (currA != 0) {
                currA--;
            } else {
                currB--;
            }
        }
        System.out.println(pos);
        input.close();
    }
}