class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long currentMass = mass;

        sort(asteroids.begin(), asteroids.end());
        for (int asteroid : asteroids) {
            if (currentMass < asteroid) {
                return false;
            }
            currentMass += asteroid;
        }
        return true;
    }
};