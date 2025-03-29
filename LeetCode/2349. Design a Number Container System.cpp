class NumberContainers {
private:
    map<int, set<int>> indexSet;
    map<int, int> indexToNum;

public:
    NumberContainers() {

    }

    void change(int index, int number) {
        int num = indexToNum[index];
        indexSet[num].erase(index);
        indexSet[number].insert(index);
        indexToNum[index] = number;
    }

    int find(int number) {
        int index = -1;
        if (!indexSet[number].empty()) {
            index = *indexSet[number].begin();
        }
        return index;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
