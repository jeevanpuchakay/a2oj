
import java.util.*;

// import jdk.internal.util.xml.impl.Pair;

public class Main {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt(), k = input.nextInt();
        int kc1 = 0, kc2 = 0, pos = 0;
        Pair[] books = new Pair[n];
        for (int i = 0; i < n; i++) {
            books[i] = new Pair(input.nextInt(), input.nextInt(), input.nextInt());
            kc1 += books[i].second;
            kc2 += books[i].third;
        }
        if ((kc1 < k) || (kc2 < k)) {
            System.out.println(-1);
            return;
        }

        Arrays.sort(books, new Comparator<Pair>() {
            @Override
            public int compare(Pair p1, Pair p2) {
                if (p1.second == p2.second) {
                    return p1.first - p2.first;
                } else if (p1.second == 1 && p2.second == 0) {
                    return -1;
                } else {
                    return 1;
                }
            }
        });
        long ans1 = 0, ans2 = 0;
        kc1 = kc2 = k;
        pos = 0;
        while (kc1 > 0 || kc2 > 0) {
            if (books[pos].second == 0 && books[pos].third == 0) {
                pos++;
                continue;
            }
            ans1 += books[pos].first;
            if (kc1 > 0 && books[pos].second == 1) {
                kc1--;
            }
            if (kc2 > 0 && books[pos].third == 1)
                kc2--;
            pos++;
        }

        Arrays.sort(books, new Comparator<Pair>() {
            @Override
            public int compare(Pair p1, Pair p2) {
                if (p1.third == p2.third) {
                    return p1.first - p2.first;
                } else if (p1.third == 1 && p2.third == 0) {
                    return -1;
                } else {
                    return 1;
                }
            }
        });
        kc1 = kc2 = k;
        pos = 0;
        while (kc1 > 0 || kc2 > 0) {
            if (books[pos].second == 0 && books[pos].third == 0) {
                pos++;
                continue;
            }
            ans2 += books[pos].first;
            if (kc1 > 0 && books[pos].second == 1) {
                kc1--;
            }
            if (kc2 > 0 && books[pos].third == 1)
                kc2--;
            pos++;
        }

        Arrays.sort(books, new Comparator<Pair>() {
            @Override
            public int compare(Pair p1, Pair p2) {
                if (p1.third == p1.second && p1.second == 1 && p2.third == 1 && p2.second == 1) {
                    return p1.first - p2.first;
                } else if (p1.third == 1 && p1.second == 1) {
                    return -1;
                } else if (p2.third == 1 && p2.second == 1) {
                    return 1;
                } else {
                    return p1.first - p2.first;
                }
            }
        });

        kc1 = kc2 = k;
        pos = 0;
        boolean yes;
        long ans3 = 0;
        while (kc1 > 0 || kc2 > 0) {
            if (books[pos].second == 0 && books[pos].third == 0) {
                pos++;
                continue;
            }
            // ans3 += books[pos].first;
            yes = false;
            if (kc1 > 0 && books[pos].second == 1) {
                kc1--;
            }
            if (kc2 > 0 && books[pos].third == 1) {
                yes = true;
                kc2--;
            }
            if (yes)
                ans3 += books[pos].first;
            pos++;
        }
        System.out.println(Math.min(ans1, Math.min(ans3, ans2)));
        input.close();
    }
}

class Pair {
    int first, second, third;

    Pair(int x, int y, int z) {
        this.first = x;
        this.second = y;
        this.third = z;
    }
}
