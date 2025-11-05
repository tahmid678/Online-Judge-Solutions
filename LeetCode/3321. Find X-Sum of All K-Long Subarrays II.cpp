class Solution {
public:
    vector<long long> result;
    map<int, int> numFreqs;
    set<pair<int, int>> mostFreqs;
    set<pair<int, int>> lessFreqs;
    long long tempResult = 0;

    void add(int num, int x) {
        if (this->numFreqs[num]) {
            this->removePair({numFreqs[num], num});
        }
        this->numFreqs[num]++;
        this->addPair({this->numFreqs[num], num}, x);
    }

    void remove(int num, int x) {
        this->removePair({this->numFreqs[num], num});
        this->numFreqs[num]--;
        if (this->numFreqs[num]) {
            this->addPair({this->numFreqs[num], num}, x);
        }
    }

    void addPair(pair<int, int> p, int x) {
        if (x > this->mostFreqs.size() || p > *this->mostFreqs.begin()) {
            this->tempResult += (long long)(p.first) * p.second;
            this->mostFreqs.insert(p);
            if (x < this->mostFreqs.size()) {
                auto first = *this->mostFreqs.begin();
                this->tempResult -= (long long)(first.first) * first.second;
                this->mostFreqs.erase(first);
                this->lessFreqs.insert(first);
            }
        } else {
            this->lessFreqs.insert(p);
        }
    }

    void removePair(pair<int, int> p) {
        if (p >= *this->mostFreqs.begin()) {
            this->tempResult -= (long long)(p.first) * p.second;
            this->mostFreqs.erase(p);
            if (!this->lessFreqs.empty()) {
                auto last = *this->lessFreqs.rbegin();
                this->tempResult += (long long)(last.first) * last.second;
                this->lessFreqs.erase(last);
                this->mostFreqs.insert(last);
            }
        } else {
            this->lessFreqs.erase(p);
        }
    }

    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        for (int i = 0; i < nums.size(); i++) {
            this->add(nums[i], x);
            if (i >= k) {
                this->remove(nums[i - k], x);
            }
            if (i >= k - 1) {
                this->result.push_back(this->tempResult);
            }
        }
        return this->result;
    }
};
