// Use hash map for efficiency



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        vector<int> ans(2,-1);
        vector<int> fake(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());

        while(1){
            if(nums[start]+nums[end]==target){
                int s=0,e=nums.size()-1;
                while(1)
                {
                    int m=(s+e)/2;
                    if(fake[m]==nums[start])
                    {
                        ans[0]=m;
                        break;
                    }
                    else if(fake[m]>nums[start]){
                        e=m;
                    }
                    else{
                        s=m+1;
                    }
                }
                s=0,e=nums.size()-1;
                while(1)
                {
                    int m=(s+e)/2;
                    if(fake[m]==nums[end])
                    {
                        ans[01]=m;
                        break;
                    }
                    else if(fake[m]>nums[end]){
                        e=m;
                    }
                    else{
                        s=m+1;
                    }
                }
              return ans;
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
    }
};