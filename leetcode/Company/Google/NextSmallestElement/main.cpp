vector<int> Solution::prevSmaller(vector<int> &a) {
    vector<int> ans;
    stack<int> stack;
    for(int each: a){
        while((stack.empty()==false)&&(each<=stack.top()))stack.pop();
        if(stack.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(stack.top());
        }
        stack.push(each);
    }
    return ans;
}
