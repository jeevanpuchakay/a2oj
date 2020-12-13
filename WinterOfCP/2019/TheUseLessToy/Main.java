
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        int initial, ffinal;
        initial = getPos(input.next().charAt(0));
        ffinal = getPos(input.next().charAt(0));
        int n = input.nextInt();
        if ((initial + n) % 4 == ffinal && initial != (ffinal + n) % 4) {
            System.out.println("cw");
        } else if ((initial + n) % 4 != ffinal && initial == (ffinal + n) % 4) {
            System.out.println("ccw");
        } else {
            System.out.println("undefined");
        }
        input.close();
    }

    static int getPos(char shape) {
        switch (shape) {
        case 'v':
            return 0;
        case '<':
            return 1;
        case '^':
            return 2;
        default:
            return 3;
        }
    }
}