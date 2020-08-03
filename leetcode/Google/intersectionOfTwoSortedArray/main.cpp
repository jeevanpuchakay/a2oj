vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int n1=a.size(),n2=b.size(),pos1=0,pos2=0;
    vector<int> ans;

    while((pos1<n1)&&(pos2<n2)){
        if(a[pos1]<b[pos2]){
            pos1++;
        }
        else if(a[pos1]>b[pos2]){
            pos2++;
        }else{
            ans.push_back(a[pos1]);
            pos1++;pos2++;
        }
    }
    return ans;
}
