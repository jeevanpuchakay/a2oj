import java.util.ArrayList;

class Solution {
    public List<String> readBinaryWatch(int num) {
        List<String> ans = new ArrayList<String>();
        int hours = 0, mins = 0;
        for (int i = 0; i < num; i++) {
            hours = go(i, 0);
            mins = go(num - i, 0);
            hours += (mins / 60);
            hours %= 12;
            mins %= 60;
            String temp = "";
            while (hours) {
                temp = (char) ('0' + hours % 10) + temp;
                hours /= 10;
            }
            temp += ':';
            if (mins <= 9) {
                temp += '0';
            }
            String temp2 = "";
            while (mins) {
                temp2 = (char) ('0' + mins % 10) + temp2;
                mins /= 10;
            }
            temp += temp2;
            ans.add(temp);
        }

    }
    public int go(int count,int sum){
        if(count==0)return sum;
        
    }
}