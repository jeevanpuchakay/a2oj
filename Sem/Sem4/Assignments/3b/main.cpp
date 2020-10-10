//JeevanReddy
//180001039
//assignment-3
//question-2


#include <bits/stdc++.h>
using namespace std;

string infixtopostfix(string s){
    string ans="";
    int a=0,b=s.size();
    char sak[b];
    int top=-1;
    while(a<b){
        if(s[a]<'0'&&s[a]!='('&&s[a]!=')'){
            //if current operator priority is greater than top's priority
            while(((top<0)&&(sak[top]>s[a]))&&(sak[top]!='(')){
                char temp=sak[top];
                ans+=temp;
                top--;
            }
            sak[++top]=s[a];
        }
        else if(s[a]==')'){
            //upon encountering closing brackett pop the stack till you encounter opening brackett
            while(sak[top]!='('){
                char temp=sak[top];
                ans+=temp;
                top--;
            }
            top--;
        }
        else if(s[a]!='('){
            ans+=s[a];
        } else{
            sak[++top]=s[a];
        }
        a++;
    }
    while(top>=0){
        char temp=sak[top];
        ans+=temp;
        top--;
    }
    return ans;
}


// Function that converts infix
// expression to prefix expression.
string infixToPrefix(string infix)
{
    int b=infix.size();
    // stack for operators.
    char operators[b];
    int operatorsTop=-1;

    // stack for operands.
    string operands[b];
    int operandsTop=-1;

    for (int i = 0; i < b; i++) {

        // If current character is an
        // opening bracket, then
        // push into the operators stack.
        if (infix[i] == '(') {
            operators[++operatorsTop]=(infix[i]);
        }

            // If current character is a
            // closing bracket, then pop from
            // both stacks and push result
            // in operands stack until
            // matching opening bracket is
            // not found.
        else if (infix[i] == ')') {
            while ((operatorsTop>=0) &&
                   operators[operatorsTop]!= '(') {

                // operand 1
                string op1 = operands[operandsTop--];

                // operand 2
                string op2 = operands[operandsTop--];


                // operator
                char op = operators[operatorsTop--];

                // Add operands and operator
                // in form operator +
                // operand1 + operand2.
                string tmp = op + op2 + op1;
                operands[++operandsTop]=tmp;
            }

            // Pop opening bracket from
            // stack.
            operatorsTop--;
        }

            // If current character is an
            // operand then push it into
            // operands stack.
        else if (infix[i]<'0') {
            operands[++operandsTop]=infix[i];
        }

            // If current character is an
            // operator, then push it into
            // operators stack after popping
            // high priority operators from
            // operators stack and pushing
            // result in operands stack.
        else {
            while ((operatorsTop>=0) &&
                   infix[i] <=
                   operators[operatorsTop]) {

                string op1 = operands[operandsTop--];

                string op2 = operands[operandsTop--];

                char op = operators[operatorsTop--];

                string tmp = op + op2 + op1;
                operands[++operandsTop]=(tmp);
            }

            operators[++operatorsTop]=(infix[i]);
        }
    }

    // Pop operators from operators stack
    // until it is empty and add result
    // of each pop operation in
    // operands stack.
    while (operatorsTop>=0) {
        string op1 = operands[operandsTop--];

        string op2 = operands[operandsTop--];

        char op = operators[operatorsTop--];

        string tmp = op + op2 + op1;
        operands[++operandsTop]=tmp;
    }

    // Final prefix expression is
    // present in operands stack.
    return operands[operandsTop];
}
int main() {
    string v;
    cin>>v;
    cout<<infixtopostfix(v);
    return 0;
}