#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    if (!(cin >> n) || n < 0) 
    {
        cerr << "Invalid size.\n";
        return 1;
    }

    vector<long long> arr(n);

    unordered_map<long long, int> freqMap;

    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (!(cin >> arr[i])) 
        {
            cerr << "Invalid input at index " << i << "\n";
            return 1;
        }
        freqMap[arr[i]]++;
    }

    cout << "Element | Frequency\n"
        << "-------------------\n";
    
    for (const auto& [element, count] : freqMap) 
    {
        cout << element << " | " << count << "\n";
    }

    return 0;
}