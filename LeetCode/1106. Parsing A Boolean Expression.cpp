class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> exp;
        stack<char> op;
        bool result = false;

        for (auto ch : expression) {
            if (ch == ',') {
                continue;
            } else if (ch == ')') {
                char opr = op.top();
                op.pop();
                if (opr == '&') {
                    result = true;
                }
                while (exp.top() != '(') {
                    bool expr;
                    expr = exp.top() == 't' ? true : false;
                    if (opr == '|') {
                        result |= expr;
                    } else if (opr == '&') {
                        result &= expr;
                    } else {
                        result = !expr;
                    }
                    exp.pop();
                }
                exp.pop();
                if (result) {
                    exp.push('t');
                } else {
                    exp.push('f');
                }
                result = false;
            } else if (ch == '|' || ch == '&' || ch == '!') {
                op.push(ch);
            } else {
                exp.push(ch);
            }
        }
        return exp.top() == 't' ? true : false;
    }
};
