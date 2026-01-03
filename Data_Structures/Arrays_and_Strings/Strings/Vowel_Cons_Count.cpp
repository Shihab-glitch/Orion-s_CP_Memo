#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void countVC(const string& s)
{
    size_t vowel = 0;
    size_t cons = 0;

    for (const char x : s)
    {
        if (isalpha(x))
        {
            if (tolower(x) == 'a' || tolower(x) == 'e' || tolower(x) == 'i' || tolower(x) == 'o' || tolower(x) == 'u')
            {
                vowel++;
            }
            else cons++;
        }
    }
    cout << "Number of Vowels : " << vowel << "\n"
        << "Number of Consonants : " << cons << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    if (!(getline(cin, s))) return 1;

    countVC(s);

    return 0;
}