
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int ans, x, y, smallR, r, d, n;
        double distanceBtwnCentres;
        r = input.nextInt();
        d = input.nextInt();
        n = input.nextInt();
        ans = 0;
        for (int i = 0; i < n; i++) {
            x = input.nextInt();
            y = input.nextInt();
            smallR = input.nextInt();
            distanceBtwnCentres = Math.sqrt(x * x + y * y);
            if (((r - d + smallR) > distanceBtwnCentres) || ((r - smallR) < distanceBtwnCentres)) {
            } else {
                ans++;
            }
        }
        System.out.println(ans);
        input.close();
    }
}