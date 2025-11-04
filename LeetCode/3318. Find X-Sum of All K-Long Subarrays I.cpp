class Solution {
public:
    static bool sortSubArray(pair<int, int>& p1, pair<int, int>& p2) {
        if (p1.second == p2.second) {
            return p1.first > p2.first;
        }
        return p1.second > p2.second;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        map<int, int> numFreq;
        vector<pair<int, int>> subArray;
        vector<int> result;
        int tempSum = 0;

        for (int i = 0; i < k; i++) {
            numFreq[nums[i]]++;
        }

        for (auto pair : numFreq) {
            subArray.push_back(pair);
        }

        sort(subArray.begin(), subArray.end(), sortSubArray);
        if (x > numFreq.size()) {
            for (auto pair : numFreq) {
                tempSum += pair.first * pair.second;
            }
        } else {
            for (int i = 0; i < x; i++) {
                tempSum += subArray[i].first * subArray[i].second;
            }
        }
        result.push_back(tempSum);

        for (int i = 0, j = k; j < nums.size(); i++, j++) {
            tempSum = 0;
            numFreq[nums[i]]--;
            if (numFreq[nums[i]] == 0) {
                numFreq.erase(nums[i]);
            }
            numFreq[nums[j]]++;
            subArray.clear();
            for (auto pair : numFreq) {
                subArray.push_back(pair);
            }
            sort(subArray.begin(), subArray.end(), sortSubArray);
            if (x > numFreq.size()) {
                for (auto pair : numFreq) {
                    tempSum += pair.first * pair.second;
                }
            } else {
                for (int i = 0; i < x; i++) {
                    tempSum += subArray[i].first * subArray[i].second;
                }
            }
            result.push_back(tempSum);
        }
        return result;
    }
};
