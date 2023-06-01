#include <iostream>
#include <string>
using namespace std;

void mostFrequentCharacter(char *str, char &res, int &freq)
{
    // Write your code
    string s = str;
    int count[26] = {0};
    for (char c : s)
    {
        char d = tolower(c);
        count[d - 'a']++;
    }
    res = 'a';
    freq = count[0];
    for (int i = 1; i < 26; i++)
    {
        if (count[i] > freq)
        {
            res = 'a' + i;
            freq = count[i];
        }
    }
}
