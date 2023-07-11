#include <iostream>
using namespace std;

bool Check(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;

    cout << "Enetr Any Number : "
         << "\n";
    cin >> iNo;

    if (Check(iNo))
    {
        cout << "Given Number Divisible by 5"
             << "\n";
    }
    else
    {
        cout << "Given Number Not Divisible by 5"
             << "\n";
    }

    return 0;
}