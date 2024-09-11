class Solution {
public:
    string fractionAddition(string expression) {
        long numerator = 0;
        long denominator = 1;
        int operation = 1;
        int i = 0;
        long temp;

        while (i < expression.size()) {
            if (expression[i] == '-') {
                operation = 0;
                i++;
            } else if (expression[i] == '+') {
                operation = 1;
                i++;
            }
            string m = "", n = "";
            while (expression[i] >= 48 && expression[i] <= 57) {
                m += expression[i];
                i++;
            }
            i++;
            while (expression[i] >= 48 && expression[i] <= 57) {
                n += expression[i];
                i++;
            }
            long a = stoi(m);
            long b = stoi(n);
            temp = lcm(denominator, b);
            if (operation) {
                numerator = numerator * (temp / denominator) + a * (temp / b);
            } else {
                numerator = numerator * (temp / denominator) - a * (temp / b);
            }
            denominator = temp;
        }

        temp = gcd(numerator, denominator);
        numerator /= temp;
        denominator /= temp;
        return to_string(numerator) + "/" + to_string(denominator);
    }
};
