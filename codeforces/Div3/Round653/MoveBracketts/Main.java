
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int tt = input.nextInt();
        while (tt-- > 0) {
            int n = input.nextInt();
            String s = input.next();
            Stack<Integer> stack = new Stack<>();
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '(') {
                    stack.push(i);
                } else if (stack.isEmpty()) {
                    ans++;
                } else {
                    stack.pop();
                }
            }
        System.out.println(ans);
        }
        input.close();
    }
}