// #include <bits/stdc++.h> Now I'll use actual lib names (Need to learn for Dev)

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    if (!(cin >> n) || (n<2)) // EC;
    {
        cerr << "Invalid input or need more elements.\n";
        return 1;
    }

    long long min1 = LLONG_MAX;
    long long min2 = LLONG_MAX;

    vector<long long> arr(n);
    
    for (long long &x : arr) 
    {
        cin >> x;
        
        if (x < min1) 
        {
            min2 = min1;
            min1 = x;
        } 
        else if (x < min2 && x > min1) 
        { 
            min2 = x;
        }
    }

    if (min2 == LLONG_MAX) cout << "No distinct second minimum found.\n";

    else cout << "Second Min : " << min2 << "\n";

    for (const long long x : arr) cout << x << " ";

    cout << "\n";

    return 0;
}