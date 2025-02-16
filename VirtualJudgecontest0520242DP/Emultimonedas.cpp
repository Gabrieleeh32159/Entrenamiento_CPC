#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greedy_sol(int amount, const vector<int>& coins) {
    int coin_count = 0;
    for (int i = coins.size() - 1; i >= 0; --i) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            coin_count++;
        }
    }
    return coin_count;
}

int dp_sol(int amount, const vector<int>& coins) {
    vector<int> dp(amount + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (i >= coin) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[amount];
}

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    bool is_canonical = true;

    int limit = coins[n-1] + coins[n-2];

    for (int x = 1; x <= limit; ++x) {
        int greedy = greedy_sol(x, coins);
        int optimal = dp_sol(x, coins);
        if (greedy != optimal) {
            is_canonical = false;
            break;
        }
    }

    if (is_canonical) {
        cout << "canonical" << endl;
    } else {
        cout << "non-canonical" << endl;
    }

    return 0;
}
