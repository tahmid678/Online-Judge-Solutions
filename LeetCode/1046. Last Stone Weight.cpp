class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> weight;
        int stone1, stone2;

        for (int stone : stones) {
            weight.push(stone);
        }
        while (weight.size() >= 2) {
            stone1 = weight.top();
            weight.pop();
            stone2 = weight.top();
            weight.pop();
            if (stone1 != stone2) {
                weight.push(stone1 - stone2);
            }
        }
        if (!weight.size()) {
            return 0;
        }
        return weight.top();
    }
};
