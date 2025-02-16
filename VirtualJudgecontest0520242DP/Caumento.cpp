#include<bits/stdc++.h>

using namespace std;

void find_LIS(const vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return;

    vector<int> dp(n, 1);
    vector<int> prev(n, -1);

    int max_len = 1;
    int max_idx = 0;


    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] < nums[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            } else if (nums[j] < nums[i] && dp[j] + 1 == dp[i]) {
            
                vector<int> seq1, seq2;
            
                for (int x = j; x != -1; x = prev[x]) {
                    seq1.push_back(nums[x]);
                }
                reverse(seq1.begin(), seq1.end());

            
                for (int x = i; x != -1; x = prev[x]) {
                    seq2.push_back(nums[x]);
                }
                reverse(seq2.begin(), seq2.end());

                if (seq1 < seq2) {
                    prev[i] = j;
                }
            }
        }
    
        if (dp[i] > max_len) {
            max_len = dp[i];
            max_idx = i;
        } else if (dp[i] == max_len) {
        
            vector<int> seq1, seq2;
        
            for (int x = max_idx; x != -1; x = prev[x]) {
                seq1.push_back(nums[x]);
            }
            reverse(seq1.begin(), seq1.end());

        
            for (int x = i; x != -1; x = prev[x]) {
                seq2.push_back(nums[x]);
            }
            reverse(seq2.begin(), seq2.end());

            if (seq2 < seq1) {
                max_idx = i;
            }
        }
    }


    vector<int> lis;
    for (int i = max_idx; i != -1; i = prev[i]) {
        lis.push_back(nums[i]);
    }

    reverse(lis.begin(), lis.end());

    cout << lis.size() << " ";
    for (int num : lis) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

    
        find_LIS(nums);
    }

    return 0;
}
