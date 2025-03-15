#include <iostream>
#include <string>
using namespace std;

char table[][5] = {" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

void keyPads(char *input, char *out, int i, int j) {
    // Base case: If input string reaches the end
    if (input[i] == '\0') {
        out[j] = '\0'; // Null-terminate the output string
        cout << out << " ";
        return;
    }

    int digit = input[i] - '0'; // Convert char to corresponding digit

    // Skip digits that do not map to letters (like 0 and 1)
    if (digit == 0 || digit == 1) {
        keyPads(input, out, i + 1, j);
        return;
    }

    // Recursive case: Iterate through the mapped letters
    for (int k = 0; table[digit][k] != '\0'; k++) {
        out[j] = table[digit][k]; // Place letter in output
        keyPads(input, out, i + 1, j + 1); // Move to next input character
    }
}

int main() {
    char input[100];
    cin >> input;
    char out[100];
    keyPads(input, out, 0, 0);
    return 0;
}
