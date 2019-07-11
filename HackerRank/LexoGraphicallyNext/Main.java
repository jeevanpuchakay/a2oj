import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the biggerIsGreater function below.
    static String biggerIsGreater(String w) {
        int n = w.length();
        int start = n - 1;
        char[] word = w.toCharArray();
        while (start > 0) {
            if (word[start - 1] < word[start]) {
                break;
            }
            start--;
        }
        if (start == 0) {
            return "no answer";
        }
        for (int i = start; i < n; i++) {
            // word[i]=(char)(word[i]-'a'+word[n-i+start]);
            // word[n-i+start]=(char)('a'+word[i]-word[n-i+start]);
            int a = word[i] - 'a';
            int b = word[n - i + start-1] - 'a';
            a = a + b;
            b = a - b;
            a = a - b;
            word[i] = (char) ('a' + a);
            word[n - i + start-1] = (char) ('a' + b);
            // swap(word[i], word[n - (i - start)]);
        }
        int a = word[start] - 'a';
        int b = word[start - 1] - 'a';
        a = a + b;
        b = a - b;
        a = a - b;
        word[start] = (char) ('a' + a);
        word[start - 1] = (char) ('a' + b);
        String ans = word.toString();
        return ans;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int T = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int TItr = 0; TItr < T; TItr++) {
            String w = scanner.nextLine();

            String result = biggerIsGreater(w);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
