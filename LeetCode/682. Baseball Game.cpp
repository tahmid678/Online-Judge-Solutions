class Solution {
public:
    int calPoints(vector<string>& operations) {
        int points = 0;
        stack<int> pts;

        for (string op : operations) {
            if (op == "+") {
                int x = pts.top();
                pts.pop();
                int y = pts.top();
                pts.push(x);
                pts.push(x + y);
                points += x + y;
            } else if (op == "D") {
                pts.push(pts.top() * 2);
                points += pts.top();
            } else if (op == "C") {
                points -= pts.top();
                pts.pop();
            } else {
                int x = stoi(op);
                points += x;
                pts.push(x);
            }
        }
        return points;
    }
};
