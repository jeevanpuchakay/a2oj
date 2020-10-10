
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int t = input.nextInt();
        while (t-- > 0) {
            int n = input.nextInt();
            int[] array = new int[n];
            int a = input.nextInt();
            array[0] = a;
            a = 0;
            int b = input.nextInt(), temp;
            array[1] = b;
            b = 1;
            boolean yes = false;
            for (int i = 2; i < n; i++) {

                temp = input.nextInt();
                array[i] = temp;
                if (!yes) {
                    if (array[a] < array[b]) {
                        if (temp < array[b]) {
                            System.out.println("YES");
                            System.out.println((a + 1) + " " + (b + 1) + " " + (i + 1));
                            yes = true;
                        } else {
                            b = i;
                        }
                    } else {
                        a = b;
                        b = i;
                    }
                }
            }
            if (yes) {

            } else {
                System.out.println("NO");
            }
        }

        input.close();
    }
}