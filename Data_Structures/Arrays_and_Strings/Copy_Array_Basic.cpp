// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int a[n], b[n];

    for (int i=0; i<n; ++i) cin >> a[i];

    memcpy(b, a, n * sizeof(a[0]));

    for (int i=0; i<n; ++i) cout <<  b[i] << ' ';

    cout << '\n';

    return 0;
}