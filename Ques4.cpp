#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    if (s.length() <= 1)

        return true;
    if (s.front() != s.back())

        return false;

    return isPalindrome(s.substr(1, s.length() - 2));
}

int main()
{
    string s;
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
