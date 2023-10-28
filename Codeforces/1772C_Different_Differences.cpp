#include <bits/stdc++.h>
using namespace std;

#define loop(i, n) for (int i = 0; i < int(n); i++)

int check(int x)
{
    int arr[1000] = {0};
    int sum = 0;
    for (int i = 1; i < 1000; i++)
    {
        sum += i;
        if (sum < 1000)
            arr[sum] = i;
    }
    int temp = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (arr[i] == 0)
            arr[i] = temp;
        else
            temp = arr[i];
    }

    return arr[x] + 1;
}

void solve()
{
    int k, n;
    cin >> k >> n;

    int diff = n - k;

    int j = check(diff);

    for (int i = 1, it = 0; it < k;    )
    {
        cout << i << " ";
        it++;
        if (j > 0)
            i += j--;
        else
            i += 1;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}