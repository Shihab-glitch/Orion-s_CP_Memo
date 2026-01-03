#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    if (!(cin >> n) || (n < 0)) return 1;

    vector<int> arr(n);

    for (int &x : arr) cin >> x;

    int left = 0, right = (n-1);

    while (left < right)

    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (const int x : arr) 
    {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}