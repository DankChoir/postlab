// sum of squares
int countWaysUtil(int x, int num){
    int val = (x - num * num);
    if (val == 0)
        return 1;
    if (val < 0)
        return 0;


    return countWaysUtil(val, num + 1) +
           countWaysUtil(x, num + 1);
}

int countWaySumOfSquare(int x) {
    return countWaysUtil(x, 1);
}
