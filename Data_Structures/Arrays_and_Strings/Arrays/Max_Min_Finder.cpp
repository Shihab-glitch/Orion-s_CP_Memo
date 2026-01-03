#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max_ = INT_MIN, min_ = INT_MAX; 
    if (!(cin >> n) || (n<=0)) return 0;

    int arr[n];

    for (int i=0; i<n; ++i)
    {
        cin >> arr[i];
        if (arr[i] > max_) max_ = arr[i];
        if (arr[i] < min_) min_ = arr[i];
    }

    cout << "Max : " << max_ << "\n"
        << "Min : " << min_ << "\n";

    return 0;
}