class Solution {
public:
    static bool cmpFunc(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0]) {
            return a[1] < b[1];
        }
        return a[0] < b[0];
    }

    int countDays(int days, vector<vector<int>>& meetings) {
        int noMeeting = 0;

        sort(meetings.begin(), meetings.end(), cmpFunc);
        int maxDay = meetings[0][1];
        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] > maxDay) {
                noMeeting += meetings[i][0] - maxDay - 1;
            }
            maxDay = max(meetings[i][1], maxDay);
        }
        noMeeting += meetings[0][0] > 1 ? meetings[0][0] - 1 : 0;
        noMeeting += days > maxDay ? days - maxDay : 0;
        return noMeeting;
    }
};
