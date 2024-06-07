//
// Created by vivekdagar on 6/7/24.
//
#include <bits/stdc++.h>

using namespace std;

bool isOperand(char t) {
    switch (t) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case ')':
        case '(':
            return false;
        default:
            return true;
    }
}

double eval(string postfix) {
    stack<double> stk;
    double result = 0;
    for (int i{0}; postfix[i] != '\0';) {
        if (isOperand(postfix[i])) {
            stk.push(postfix[i] - '0');
            i++;
        } else {
            double a = stk.top();
            stk.pop();
            double b = stk.top();
            stk.pop();
            char op = postfix[i];
            switch (op) {
                case '+':
                    result = b + a;
                    break;
                case '-':
                    result = b - a;
                    break;
                case '/':
                    result = b / a;
                    break;
                case '*':
                    result = b * a;
                    break;
                case '^':
                    result = pow(b, a);
                    break;
            }
            stk.push(result);
            i++;
        }
    }
    return stk.top();
}