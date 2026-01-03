#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, sum1 = 0; cin >> n;

    int arr[n], arr1[n];

    for (int &x : arr)
    {
        cin >> x;
        sum += x;
    }

    for (int i=0; i<n; ++i)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }

    cout << "Sum of Array Elem by For Each : " << sum << "\n"
        << "Sum of Array Elem by Iteration : " << sum1 << "\n";
    
    return 0;
}