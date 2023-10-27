#include <bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
    while (n != 0)
    {
        if (!(n % 10 == 7 || n % 10 == 4))
            return false;

        n /= 10;
    }
    return true;
}

bool almost_lucky(int n)
{
    for (int i = 4; i <= n; i++)
    {
        if (lucky(i))
        {
            if (n % i == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (lucky(n))
        cout << "YES" << endl;
    else if (almost_lucky(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
