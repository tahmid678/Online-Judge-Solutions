class ProductOfNumbers {
public:
    vector<int> prefixProducts;
    int currentProduct, size;

    ProductOfNumbers() {
        currentProduct = 1;
        size = 0;
    }

    void add(int num) {
        currentProduct *= num;
        if (!currentProduct) {
            prefixProducts.clear();
            currentProduct = 1;
            size = 0;
        } else {
            prefixProducts.push_back(currentProduct);
            size = prefixProducts.size();
        }
    }

    int getProduct(int k) {
        if (size < k) {
            return 0;
        } else if (size == k) {
            return prefixProducts[size - 1];
        } else {
            return prefixProducts[size - 1] / prefixProducts[size - k - 1];
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
