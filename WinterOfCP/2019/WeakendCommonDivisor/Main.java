
import java.util.*;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt(), num, ans = -1;
        Pair[] numbers = new Pair[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = new Pair(input.nextInt(), input.nextInt());
        }
        ArrayList<Integer> primes = new ArrayList<>();
        num = numbers[0].first;
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                primes.add(i);
            }
            while (num % i == 0)
                num /= i;
        }
        num = numbers[0].second;
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                primes.add(i);
            }
            while (num % i == 0)
                num /= i;
        }
        for (Integer eachPrime : primes) {
            if (countOfDivisiblePairs(numbers, n, eachPrime) == 1) {
                System.out.println(eachPrime);
                return;
            }
        }
        System.out.println(-1);
        input.close();
    }

    public static int countOfDivisiblePairs(Pair[] numbers, int n, int divisor) {
        for (int i = 0; i < n; i++) {
            if (numbers[i].first % divisor != 0 && numbers[i].second % divisor != 0)
                return 0;
        }
        return 1;
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