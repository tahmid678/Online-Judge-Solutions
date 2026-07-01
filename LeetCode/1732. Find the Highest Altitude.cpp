class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAltitude = 0;
        int currentNetGain = 0;
        for (int altitude : gain) {
            currentNetGain += altitude;
            highestAltitude = max(highestAltitude, currentNetGain);
        }
        return highestAltitude;
    }
};