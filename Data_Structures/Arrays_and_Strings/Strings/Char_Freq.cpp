#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

void charFreq(const string& s)
{
    map<char, int> freqMap;

    for (const char x : s)
    {
        if (!isspace(x))
        {
            freqMap[x]++;
        }
    }

    for (const auto& [charac, count] : freqMap)
    {
        cout << charac << " | " << count << "\n"; 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    if (!(getline(cin, s))) return 1;

    charFreq(s);

    return 0;
}