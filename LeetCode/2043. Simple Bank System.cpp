class Bank {
public:
    vector<long long> balance;

    Bank(vector<long long>& balance) {
        this->balance = balance;
    }

    bool transfer(int account1, int account2, long long money) {
        if (account1 < 1 || account1 > this->balance.size())
            return false;
        else if (account2 < 1 || account2 > this->balance.size())
            return false;
        else if (this->balance[account1 - 1] < money)
            return false;
        else {
            this->balance[account1 - 1] -= money;
            this->balance[account2 - 1] += money;
        }
        return true;
    }

    bool deposit(int account, long long money) {
        if (account < 1 || account > this->balance.size())
            return false;
        this->balance[account - 1] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        if (account < 1 || account > this->balance.size())
            return false;
        else if (this->balance[account - 1] < money)
            return false;
        else {
            this->balance[account - 1] -= money;
        }
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
