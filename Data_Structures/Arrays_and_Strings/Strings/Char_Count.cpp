#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void charCount(const string& s)
{
    size_t alpha = 0;
    size_t num = 0;
    size_t spec = 0;

    for (const char x : s)
    {
        if (isalpha(x)) alpha++;
        else if (isdigit(x)) num++;
        else if (!isspace(x)) spec++;
    }

    cout << "Alphabets : " << alpha << "\n"
        << "Digits : " << num << "\n"
        << "Special : " << spec << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(getline(cin, s))) return 1;

    charCount(s);

    return 0;
}