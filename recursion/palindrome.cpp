bool palindromeRecursionHelper(string s, int start, int end) {
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return palindromeRecursionHelper(s, start + 1, end - 1);
}

bool palindromeRecursion(string s)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    return palindromeRecursionHelper(s, 0, s.length() - 1);
    // END YOUR EMPLEMENTATION [1]
}

int main()
{
    hiddenCheck();
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    string s;
    while (cin >> s && s[0] != '*') {
        string res1 = "false";
        string res2 = "false";
        if(palindrome(s)) res1 = "true";
        if(palindromeRecursion(s)) res2 = "true";
        cout << res1 << " " << res2 << endl;
    }
    // END YOUR EMPLEMENTATION [2]
    return 0;
}
