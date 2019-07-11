

class Solution {
    public void nextPermutation(int[] nums) {
        int n=(int)nums.length();
        int start=n-1;
        while((start>0)&&(nums[start]<=nums[start-1]))start--;
        if(start==0){
            
        }

    }
}