#include <iostream>
#include <string>
#include <cctype>

using namespace std;

size_t countWords(const string& s)
{
    size_t count = 0;
    bool inWord = false;

    for (const char x : s)
    {
        if (isspace(x))
        {
            inWord = false;
        }
        else if (!inWord)
        {
            inWord = true;
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    if (!(getline(cin, s))) return 1;

    cout << "Word Count : " << countWords(s) << "\n";

    return 0;
}