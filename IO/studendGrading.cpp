void studentGrading(string fileName)
{
    // TODO
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    ifstream file(fileName);
    string line;
    getline(file, line);
    istringstream ss(line);
    int num;
    ss >> num;
    for (int i = 0; i < num; i++)
    {
        getline(file, line);
        istringstream ss(line);
        float nmdt, ktlt, dsa, ppl;
        float average;

        ss >> nmdt >> ktlt >> dsa >> ppl;

        if (nmdt < 5 || ktlt < 5 || dsa < 5 || ppl < 5)
        {
            D++;
            continue;
        }

        average = (nmdt + ktlt + dsa + ppl) / 4;

        if (average >= 8)
        {
            A++;
            continue;
        }

        if (average >= 6.5)
        {
            B++;
            continue;
        }

        if (average >= 5)
        {
            C++;
            continue;
        }
    }
    cout << "A " << A << endl;
    cout << "B " << B << endl;
    cout << "C " << C << endl;
    cout << "D " << D << endl;
}
