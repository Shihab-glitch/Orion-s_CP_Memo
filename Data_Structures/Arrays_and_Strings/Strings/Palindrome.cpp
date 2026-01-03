#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPal(const string& s)
{
    if (s.empty()) return true;

    size_t left = 0;
    size_t right = (s.size() - 1);

    while (left < right)
    {
        if (tolower(s[left]) != tolower(s[right])) return false;

        left++;
        right--;
    }

    return true;
}

int main()
{
    string meh;
    if (!(getline(cin, meh))) return 1;

    if (isPal(meh))
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }

    return 0;
}