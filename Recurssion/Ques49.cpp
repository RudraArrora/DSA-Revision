#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> v;
void ans(string s, int i)
{
    if (s[i] == '\0')
    {
        v.push_back(s);
        return;
    }
    for (int j = i; s[j] != '\0'; j++)
    {
        swap(s[i], s[j]);
        ans(s, i + 1);
        swap(s[i], s[j]);
    }
}
int main()
{
    string s;
    cin >> s;
    ans(s, 0);
    sort(v.begin(), v.end());
    for (auto j : v)
    {
        if (j > s)
        {
            cout << j << endl;
        }
    }
}