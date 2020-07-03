import java.util.HashMap;
import java.util.Stack;

class Solution {
    public int calculate(String s) {
        Stack<Integer> operands = new Stack<>();
        Stack<Character> operators = new Stack<>();
        HashMap<Character, Integer> precedence = new HashMap<>();

        precedence.put('+', 0);
        precedence.put('-', 0);
        precedence.put('*', 1);
        precedence.put('/', 2);
        int number = 0;
        boolean num = false;
        Character oprn;
        int op1, op2;
        for (Character each : s.toCharArray()) {
            System.out.println(each);
            if (each == ' ') {
                if (num) {
                    operands.push(number);
                    num = false;
                }
            } else if ((each >= '0') && (each <= '9')) {
                if (num == false)
                    number = 0;
                num = true;
                number *= 10;
                number += (each - '0');
            } else {
                if (num)
                    operands.push(number);
                num = false;
                while ((operators.empty() == false) && (precedence.get(operators.peek()) >= precedence.get(each))) {
                    op2 = operands.peek();
                    operands.pop();
                    op1 = operands.peek();
                    operands.pop();
                    oprn = operators.peek();
                    operators.pop();
                    if (oprn == '+') {
                        operands.push(op1 + op2);

                    } else if (oprn == '-') {
                        operands.push(op1 - op2);
                    } else if (oprn == '/') {
                        operands.push(op1 / op2);
                    } else {
                        operands.push(op1 * op2);
                    }
                }
                operators.push(each);
            }
        }
        if (num) {
            operands.push(number);
            num = false;
        }
        while (operators.empty() == false) {
            op2 = operands.peek();
            operands.pop();
            op1 = operands.peek();
            operands.pop();
            oprn = operators.peek();
            operators.pop();
            if (oprn == '+') {
                operands.push(op1 + op2);

            } else if (oprn == '-') {
                operands.push(op1 - op2);
            } else if (oprn == '/') {
                operands.push(op1 / op2);
            } else {
                operands.push(op1 * op2);
            }
        }
        return operands.peek();
    }
}