//
// Created by vivekdagar on 6/7/24.
//
#include <string>
#include <cmath>
#include <stack>

using std::stack, std::string;

bool isOpeningBracket(char t) {
    switch (t) {
        case '(':
        case '[':
        case '{':
            return true;
        default:
            return false;
    }
}

bool isClosingBracket(char t) {
    switch (t) {
        case ')':
        case ']':
        case '}':
            return true;
        default:
            return false;
    }
}

bool isBalanced(const string &expression) {
    stack<char> stk;

    for (char i: expression) {
        if (isOpeningBracket(i))
            stk.push(i);
        else if (isClosingBracket(i)) {
            if (stk.empty()) return false;

            char t = stk.top();
            stk.pop();
            int value = abs(int(t) - int(i));
            if (value != 1 && value != 2) return false;
        }
    }
    return stk.empty();
}