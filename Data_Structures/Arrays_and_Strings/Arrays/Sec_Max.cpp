#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; 
    if (!(cin >> n) || (n<0)) return 0; // EC 01;
    
    if (n < 2) // EC 02;
    {
        cout << "Need at least 2 elements.\n";
        return 0;
    }

    vector<int> arr(n);

    for (int &x : arr) cin >> x;

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int x : arr) 
    {
        if (x > max1) 
        {
            max2 = max1;
            max1 = x;
        } 
        else if (x > max2 && x < max1) 
        { 
            max2 = x;
        }
    }

    (max2 == INT_MIN) ? (cout << "No distinct second maximum found.\n") :
        (cout << "Second Max : " << max2 << "\n");

    return 0;
}