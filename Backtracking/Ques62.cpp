#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canPlace(int sudoko[][9], int i, int j, int num, int n) {
    for (int x = 0; x < n; x++) {
        if (sudoko[x][j] == num || sudoko[i][x] == num) {
            return false;
        }
    }

    int rn = sqrt(n);
    int sx = (i / rn) * rn;
    int sy = (j / rn) * rn;
    for (int x = sx; x < sx + rn; x++) {
        for (int y = sy; y < sy + rn; y++) {
            if (sudoko[x][y] == num) {
                return false;
            }
        }
    }
    return true;
}

bool solve(int sudoko[][9], int i, int j, int n) {
    if (i == n) {
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                cout << sudoko[x][y] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    
    if (j == n) return solve(sudoko, i + 1, 0, n);
    if (sudoko[i][j] != 0) return solve(sudoko, i, j + 1, n);
    
    for (int number = 1; number <= n; number++) {
        if (canPlace(sudoko, i, j, number, n)) {
            sudoko[i][j] = number;
            if (solve(sudoko, i, j + 1, n)) return true;
            sudoko[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int sudoko[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    
    solve(sudoko, 0, 0, 9);
    return 0;
}
