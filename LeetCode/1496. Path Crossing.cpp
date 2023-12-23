class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string, int> coords;
        string direction;
        int x = 0, y = 0;

        direction = to_string(x) + "->" + to_string(y);
        coords[direction]++;
        direction.clear();

        for (int i = 0; i < path.size(); i++) {
            switch (path[i]) {
            case 'N':
                y++;
                direction = to_string(x) + "->" + to_string(y);
                if (coords[direction] > 0) {
                    return true;
                }
                coords[direction]++;
                direction.clear();
                break;
            case 'S':
                y--;
                direction = to_string(x) + "->" + to_string(y);
                if (coords[direction] > 0) {
                    return true;
                }
                coords[direction]++;
                direction.clear();
                break;
            case 'E':
                x++;
                direction = to_string(x) + "->" + to_string(y);
                if (coords[direction] > 0) {
                    return true;
                }
                coords[direction]++;
                direction.clear();
                break;
            case 'W':
                x--;
                direction = to_string(x) + "->" + to_string(y);
                if (coords[direction] > 0) {
                    return true;
                }
                coords[direction]++;
                direction.clear();
                break;
            }
        }

        return false;
    }
};