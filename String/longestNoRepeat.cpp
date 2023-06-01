#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool contain(string str, char a)
{
    for (char c : str)
    {
        if (c == a)
            return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    // TODO

    int maxChu = 0;
    int left = 0;
    string daiNhat;

    for (int right = 0; right < s.length(); right++)
    {
        while (contain(daiNhat, s[right]))
        {
            left++;
            daiNhat = s.substr(left, right - left);
        }
        daiNhat = s.substr(left, right - left + 1);
        maxChu = (maxChu > (right - left + 1)) ? maxChu : (right - left + 1);
    }
    cout << maxChu;
}
