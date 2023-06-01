#include <iostream>
#include <string>

using namespace std;

int main()
{
    // TODO
    string s;
    cin >> s;

    string maxSym;
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++)
    {
        // when Odd
        int left = i;
        int right = i;
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            if (right - left + 1 > maxLength)
            {
                maxSym = s.substr(left, right - left + 1);
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }

        // Even case
        left = i;
        right = i + 1;
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            if (right - left + 1 > maxLength)
            {
                maxSym = s.substr(left, right - left + 1);
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }

    cout << maxSym;
}
