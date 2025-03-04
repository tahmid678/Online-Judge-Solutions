class CustomStack {
private:
    int maximumSize;
    vector<int> customStack;

public:
    CustomStack(int maxSize) {
        maximumSize = maxSize;
    }

    void push(int x) {
        if (customStack.size() < maximumSize) {
            customStack.push_back(x);
        }
    }

    int pop() {
        if (!customStack.size()) {
            return -1;
        }
        int topElement = customStack.back();
        customStack.pop_back();
        return topElement;
    }

    void increment(int k, int val) {
        for (int i = 0; i < k; i++) {
            if (i == customStack.size()) {
                break;
            }
            customStack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
