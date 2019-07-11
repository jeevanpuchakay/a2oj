class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size(),n,startR,endR,midR,start,end;
        if(m==0)return false;
        n=a[0].size();
        if(n==0)return false;
        startR=0,endR=m-1;
        while(startR<endR){
            midR=startR+(endR-startR)/2;
            if(a[midR][n-1]<target){
                startR=midR+1;
            }else if(a[midR][0]>target){
                endR=midR-1;
            }else if(a[midR][0]==target||a[midR][n-1]==target){
                return true;
            }else{
                startR=endR=midR;
                break;
            }
        }
        start=0,end=n-1;
        while(start<=end){
            midR=start+(end-start)/2;
            if(a[startR][midR]<target){
                start=midR+1;
            }else if(a[startR][midR]>target){
                end=midR-1;
            }else{
                return true;
            }
        }
        return false;
    }
};