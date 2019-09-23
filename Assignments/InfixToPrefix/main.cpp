#include <bits/stdc++.h>
using namespace std;
int preced(char a){
    if(a=='+'||a=='-')
        return 1;
    else if(a=='/'||a=='*')
        return 2;
    else if(a=='^')
        return 3;
    return 0;
}
string go(string s){
    int n=s.size();
    int top1=-1,top2=-1;
    char operators[n];
    string operands[n];
    int i=0;
    while(i<n){
        if(s[i]=='(')
        {
            operators[++top1]=s[i];
        }
        else if(s[i]==')'){
            while(operators[top1]!='('){
                string op1=operands[top2--];
                string op2=operands[top2--];
                char opr=operators[top1--];
                operands[++top2]=opr+op2+op1;
            }
            top1--;
        }
        else if((s[i]=='*')||(s[i]=='-')||(s[i]=='+')||(s[i]=='/')||s[i]=='^'){
            while(top1>=0){
                if(preced(s[i])<=preced(operators[top1])){
                string op1=operands[top2];
                top2--;
                string op2=operands[top2];
                top2--;
                char opr=operators[top1];
                top1--;
                operands[++top2]=opr+op2+op1;}
                else
                    break;
               //cout<<1<<" "<<operands[top2]<<" ";
            }
            operators[++top1]=s[i];
        }
        else{
            operands[++top2]=s[i];
        }
        i++;
    }
    while(top1>=0){
        string op1=operands[top2--];
        string op2=operands[top2--];
        char opr=operators[top1--];
        operands[++top2]=opr+op2+op1;
        //cout<<2<<" "<<operands[top2]<<" ";
    }
    return operands[top2];
}
int main() {
    string s;
    cin>>s;
    cout<<go(s);
    return 0;
}