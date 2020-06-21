import java.util.*;

class Solution {
    static int ValidPair(int array[], int n) {
        Arrays.sort(array);
        int ans = 0;
        int start, end, mid, m1;
        for (int i = 0; i < n - 1; i++) {
            start = i + 1;
            end = n - 1;
            m1 = -1;
            while (start < end) {
                mid = start + (end - start) / 2;
                if (array[mid] > -array[i]) {
                    end = mid;
                    m1 = mid;
                } else {
                    start = mid + 1;
                }
            }
            if(m1!=-1){
                ans+=n-m1;
            }
        }
        return ans;
        // code here
    }
}