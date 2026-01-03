#include <iostream>
#include <string>

using namespace std;

bool isSub(const string& st, const string& sub)
{
    if (sub.empty()) return true;
    if (st.size() < sub.size()) return false;
    
    for (size_t i = 0; i <= (st.size() - sub.size()); ++i)
    {
        size_t j = 0;

        while (j < sub.size() && st[i + j] ==  sub[j])
        {
            j++;
        }

        if (j == sub.size()) return true;
    }

    return false;
}

int main()
{
    string a, b;
    // if (!(cin >> a >> b)) return 1;

    getline(cin, a);
    getline(cin, b);

    if (isSub(a, b)) cout << "Substring Present.\n";
    else cout << "Substring Not Present.\n";

    return 0;
}