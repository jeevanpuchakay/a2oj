
import java.util.*;

public class Template {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        Integer a=Integer.valueOf(34);

        Integer b=Integer.valueOf(34);
        System.out.println(a==b);
        System.out.println(a.equals(b));
        input.close();
    }
}