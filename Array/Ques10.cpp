#include <iostream>
#include <algorithm>
using namespace std;
bool compare(string s1, string s2)
{
    if ((s1 + s2) > (s2 + s1))
    {
        return true;
    }
    return false;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
	cout<<endl;
	}
}