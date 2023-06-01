#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

// BAI 1
bool isPrime(const int &a)
{
    if (a <= 1)
        return false;
    if (a == 2)
        return true;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int specialCells(int arr[][1000], int row, int col)
{
    vector<int> sumRows;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        sumRows.push_back(sum);
    }

    vector<int> sumCols;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        sumCols.push_back(sum);
    }

    int speCell = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (isPrime(sumRows[i]) && isPrime(sumCols[j]))
                speCell++;
        }
    }
    return speCell;
}


// ---------------BAI 2
int subMatrix(int arr[][1000], int row, int col)
{
    int H5N1 = 0;
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            int sum = 0;
            sum = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            if (sum % 2 == 1)
                H5N1++;
        }
    }
    return H5N1;
}

