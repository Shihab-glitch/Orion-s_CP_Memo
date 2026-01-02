#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, j, temp;
    cin >> n ;

    vector<int> arr(n);

    for(i=0; i<n; ++i) cin >> arr[i] ;

    for(i=0; i<(n-1); ++i)
        for(j=0; j<((n-1)-i); ++j)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp ;

                // swap(arr[j], arr[j+1]); // if temp not used
            }
        }

    for(i=0; i<n; ++i) cout << arr[i] << ' ';

    cout << '\n';

    return 0;
}