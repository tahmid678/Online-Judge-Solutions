class Solution {
private:
    int commonGCD = 0;
    unordered_map<int, int> deckFreqs;

    int findGCD(int num1, int num2) {
        if (num1 < num2)
            swap(num1, num2);
        while (num1 && num2) {
            num1 %= num2;
            swap(num1, num2);
        }
        return num1;
    }

public:
    bool hasGroupsSizeX(vector<int>& deck) {
        for (int deckNum : deck) {
            this->deckFreqs[deckNum]++;
        }
        for (pair<int, int> p : this->deckFreqs) {
            this->commonGCD = this->findGCD(this->commonGCD, p.second);
        }
        return this->commonGCD > 1 ? true : false;
    }
};
