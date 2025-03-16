class Solution {
public:
    static bool sortByPrice(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }

    int maxBeauty(vector<vector<int>>& items, int price) {
        int l = 0, r = items.size() - 1;
        int beauty = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (items[mid][0] <= price) {
                beauty = items[mid][1];
                l = mid + 1;
            } else if (items[mid][0] > price) {
                r = mid - 1;
            }
        }
        return beauty;
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> answer;
        sort(items.begin(), items.end(), sortByPrice);
        int beauty = items[0][1];
        for (vector<int>& item : items) {
            beauty = max(beauty, item[1]);
            item[1] = beauty;
        }
        for (int query : queries) {
            answer.push_back(maxBeauty(items, query));
        }
        return answer;
    }
};
