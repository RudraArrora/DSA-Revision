#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  

    while (t--) {
        string s, g;
        getline(cin, s);
        getline(cin, g);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == g[i]) {
                cout << '0';
            } else {
                cout << '1';
            }
        }
        cout << endl;
    }

    return 0;
}