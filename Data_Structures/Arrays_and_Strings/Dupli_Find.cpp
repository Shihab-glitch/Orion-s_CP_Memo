#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findDupli(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    for (size_t i = 0; i+1 < arr.size(); ++i)
    {
        if (arr[i] == arr[i+1]) 
        {
            cout << "Duplicate found : " << arr[i] << "\n";

            while (i+1 < arr.size() && arr[i] == arr[i+1]) i++;
        }
    }
}

int main()
{
    int n;
    if (!(cin >> n) || n < 2) return 1;

    vector<int> arr(n);

    for (int &x : arr) cin >> x;

    findDupli(arr);

    return 0;
}