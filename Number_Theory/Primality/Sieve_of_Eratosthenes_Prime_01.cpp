// Time Complexity: O(n log(log(n)))
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005; // 10^6 is a safe limit for most competitive programming
int spf[MAXN];            // Stores Smallest Prime Factor

void build_sieve(int n)
{
    for (int i = 2; i <= n; ++i)
        spf[i] = i;

    for (int x = 2; (x * x) <= n; ++x)
    {
        if (spf[x] == x)
        {
            for (int u = (x * x); u <= n; u += x)
            {
                if (spf[u] == u)
                    spf[u] = x;
            }
        }
    }
}

int main()
{

    int n;
    if (!(cin >> n) || n >= MAXN)
        return 0;

    build_sieve(n);

    for (int i = 2; i <= n; ++i)
    {
        cout << "SPF(" << i << ") = " << spf[i] << " >> ";

        (spf[i] == i) ? cout << "Prime\n" : cout << "Not Prime\n";
    }

    return 0;
}