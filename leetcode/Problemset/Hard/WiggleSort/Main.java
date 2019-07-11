import java.util.Collections;

class Solution {
    public void wiggleSort(int[] nums) {
        int temp, n = nums.length, pos;
        for (int i = 1; i < n - 1; i += 2) {
            if (nums[i] < nums[i - 1]) {
                temp = nums[i - 1];
                nums[i - 1] = nums[i];
                nums[i] = temp;
            } else if (nums[i] == nums[i - 1]) {
                pos = i + 1;
                while (true) {
                    pos %= n;
                    if (pos % 2 == 0) {
                        if (nums[i] > nums[pos]) {
                            temp = nums[i];
                            nums[i] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else if (nums[i] < nums[pos]) {
                            temp = nums[i - 1];
                            nums[i - 1] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else
                            pos++;
                    } else {
                        if (nums[i] > nums[pos]) {
                            temp = nums[i];
                            nums[i] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else if ((nums[i] < nums[pos])) {
                            if ((pos > i) || (nums[pos - 1] > nums[i]) && (pos + 1 < n) && (nums[pos + 1] < nums[i])) {
                                temp = nums[i - 1];
                                nums[i - 1] = nums[pos];
                                nums[pos] = temp;
                                break;
                            } else
                                pos++;
                        } else
                            pos++;
                    }
                }
            }
            if ((i < n - 1) && nums[i] < nums[i + 1]) {
                temp = nums[i + 1];
                nums[i + 1] = nums[i];
                nums[i] = temp;
            } else if ((i < n - 1) && nums[i] == nums[i + 1]) {
                pos = i + 2;
                while (true) {
                    pos %= n;
                    if (pos % 2 == 0) {
                        if (nums[i] > nums[pos]) {
                            temp = nums[i];
                            nums[i] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else if (nums[i] < nums[pos]) {
                            temp = nums[i - 1];
                            nums[i - 1] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else
                            pos++;
                    } else {
                        if (nums[i] > nums[pos]) {
                            temp = nums[i];
                            nums[i] = nums[pos];
                            nums[pos] = temp;
                            break;
                        } else if ((nums[i] < nums[pos])) {
                            if ((pos > i) || (nums[pos - 1] > nums[i]) && (pos + 1 < n) && (nums[pos + 1] < nums[i])) {
                                temp = nums[i - 1];
                                nums[i - 1] = nums[pos];
                                nums[pos] = temp;
                                break;
                            } else
                                pos++;
                        } else
                            pos++;
                    }
                }
            }
        }
        return;
    }
}