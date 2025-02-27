#include <iostream>
using namespace std;
int main()
{
    long long int num, n, m, a, b, c;
    cin >> num;
    if (num == 0 || num == 1 || num == 2)
    {
        cout << -1;
        exit(0);
    }
    if (num % 2 == 0)
    {
        n = 1;
        m = num / 2;
        a = (m * m) - (n * n);
        c = (m * m) + (n * n);
        if ((c * c) == (a * a) + (num * num))
        {
            cout << min(a, c) << " " << max(a, c);
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        n = (num - 1) / 2;
        m = (num + 1) / 2;
        b = 2 * m * n;
        c = (m * m) + (n * n);
        if ((c * c) == (b * b) + (num * num))
        {
            cout << min(b, c) << " " << max(b, c);
        }
        else
        {
            cout << -1;
        }
    }
}