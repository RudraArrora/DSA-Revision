
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeDup(string s, int i) {
    // Base case
    if (i >= s.length()) {
        return;
    }
    cout << s[i];
    while (i + 1 < s.length() && s[i] == s[i + 1]) {
        i++;
    }
    removeDup(s, i + 1);
}

int main() {
    string s;
    cin >> s;
    removeDup(s, 0);
    return 0;
}