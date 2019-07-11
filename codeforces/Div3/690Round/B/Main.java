
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);
    public static int tt, n;
    public static String s;

    public static void main(String[] args) {
        tt = input.nextInt();
        while (tt-- > 0) {
            n = input.nextInt();
            s = input.next();
            if(isPresent()){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
    public static boolean isPresent(){

        if(n<4)return false;
        if(s.charAt(n-4)=='2'&&s.charAt(n-3)=='0'&&s.charAt(n-2)=='2'&&s.charAt(n-1)=='0')return true;
        if(s.charAt(0)=='2'&&s.charAt(n-3)=='0'&&s.charAt(n-2)=='2'&&s.charAt(n-1)=='0')return true;
        if(s.charAt(0)=='2'&&s.charAt(1)=='0'&&s.charAt(n-2)=='2'&&s.charAt(n-1)=='0')return true;
        if(s.charAt(0)=='2'&&s.charAt(1)=='0'&&s.charAt(2)=='2'&&s.charAt(n-1)=='0')return true;
        if(s.charAt(0)=='2'&&s.charAt(1)=='0'&&s.charAt(2)=='2'&&s.charAt(3)=='0')return true;
        return false;
    }
}

class Pair {
    public int first, second;

    Pair() {

    }

    Pair(int x, int y) {
        this.first = x;
        this.second = y;
    }

}

class PairComparator implements Comparator<Pair> {
    // sorts by first element in ascending order
    @Override
    public int compare(Pair p1, Pair p2) {
        if (p1.first == p2.first)
            return p1.second < p2.second ? 1 : -1;
        else if (p1.first < p2.first) {
            return 1;
        }
        return -1;
    }
}