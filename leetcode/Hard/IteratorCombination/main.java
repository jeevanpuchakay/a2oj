
import java.util.*;

class CombinationIterator {
    int[] feq;
    int cL;

    public CombinationIterator(String characters, int combinationLength) {
        this.cL = combinationLength;
        this.feq=new int[26];
        for (char each : characters.toCharArray()) {
            feq[each-'a']++;
        }
        return;
    }

    public String next() {

    }

    public boolean hasNext() {

    }
}

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator obj = new CombinationIterator(characters,
 * combinationLength); String param_1 = obj.next(); boolean param_2 =
 * obj.hasNext();
 */