int convertToBaseM(int n, int m = 2)
{
    int res = 0;
    int place = 1;
    while (n != 0)
    {
        int du = n % m;
        res += du * place;
        place *= 10;
        n = n / m;
    }
    return res;
}