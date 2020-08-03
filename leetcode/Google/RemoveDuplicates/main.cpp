int Solution::removeDuplicates(vector<int> &numbers) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=numbers.size(),lenOfDup=0;
    for(int i=1;i<n;i++){
        if(numbers[i]==numbers[i-lenOfDup-1]){
            lenOfDup++;
        }else{
            swap(numbers[i-lenOfDup],numbers[i]);
        }
    }    
    for(int i=0;i<lenOfDup;i++)numbers.pop_back();
    return lenOfDup;
}
