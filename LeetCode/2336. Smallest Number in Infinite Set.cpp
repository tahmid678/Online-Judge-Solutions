class SmallestInfiniteSet {
private:
    set<int> smallestIntegers;

public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++) {
            smallestIntegers.insert(i);
        }
    }

    int popSmallest() {
        int smallest = *smallestIntegers.begin();
        smallestIntegers.erase(smallest);
        return smallest;
    }

    void addBack(int num) {
        if (smallestIntegers.count(num)) {
            return;
        }
        smallestIntegers.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
