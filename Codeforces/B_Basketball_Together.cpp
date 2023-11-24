/*234017893	Practice:
iamaraf	1725B - 6	GNU C++17	Accepted	46 ms	392 KB	2023-11-24 12:43:31	2023-11-24 12:43:31
 * */

#include <bits/stdc++.h>
using namespace std;

#define rep(i, l, r) for (int i = l; i <= r; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
// #define int long long
int main()
{
    fast;

    int n, D;
    cin >> n >> D;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());

    int sum = 0, cnt = 0;

    for (int i = 0, j = 0; j < n && i < n;)
    {
        sum += arr[i];
        j++;

        if (sum > D)
        {
            cnt++;
            i++;
            sum = 0;
        }
    }

    cout << cnt << endl;
    return 0;
}
