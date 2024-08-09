/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> points;
        vector<int> distance = {-1, -1};
        ListNode* temp = head;
        int last = temp->val, mid, next;
        int pos = 1;
        temp = temp->next;
        while (temp->next != NULL) {
            pos++;
            mid = temp->val;
            next = temp->next->val;
            if (mid > last && mid > next) {
                points.push_back(pos);
            } else if (mid < last && mid < next) {
                points.push_back(pos);
            }
            last = mid;
            temp = temp->next;
        }

        if (points.size() >= 2) {
            sort(points.begin(), points.end());
            int min = INT_MAX;
            for (int i = 0; i < points.size() - 1; i++) {
                if (min > abs(points[i] - points[i + 1])) {
                    min = abs(points[i] - points[i + 1]);
                }
            }
            distance[0] = min;
            distance[1] = points[points.size() - 1] - points[0];
        }
        return distance;
    }
};
