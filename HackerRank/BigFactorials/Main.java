import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the extraLongFactorials function below.
    static void extraLongFactorials(int n) {
        BigInteger ans = BigInteger.valueOf(n);
        System.out.println(fact(ans));
        return;
    }

    static BigInteger fact(BigInteger n) {
        BigInteger a = new BigInteger("1");

        if (n.compareTo(a) == -1) {
            return BigInteger.valueOf(a.intValue());
        }

        return fact(n.subtract(a)).multiply(n);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        extraLongFactorials(n);

        scanner.close();
    }
}
