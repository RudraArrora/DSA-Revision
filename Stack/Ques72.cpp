#include <iostream>
#include <stack>
using namespace std;
bool check(string s)
{
    stack<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ')')
        {
            ans.push(s[i]);
        }
        else
        {
            if (ans.top() == '(')
            {
                return false;
            }
            else
            {
                while (ans.top() != '(')
                {
                    ans.pop();
                }
                ans.pop();
            }
        }
    }
    return true;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        if (!check(s))
        {
            cout << "Duplicate" << endl;
        }
        else
        {
            cout << "Not Duplicates" << endl;
        }
    }
}