#include <iostream>
#include <unordered_map>
using namespace std;

int checkLongestSubarrayWithZero(int a[], int n) {
    int pre = 0;
    int length = 0;
    int ans = 0;
    unordered_map<int, int> um;

    for (int i = 0; i < n; i++) {
        pre += a[i];

        if (pre == 0) {
            length = i + 1;
        }

        if (um.find(pre-k) != um.end()) {
            length = i - um[pre-k];
        } else {
            um[pre] = i; // Store only first occurrence
        }

        ans = max(ans, length);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << checkLongestSubarrayWithZero(a, n);
    return 0;
}
