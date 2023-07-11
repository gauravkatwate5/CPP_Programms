#include <iostream>
using namespace std;

int Divide(int iNum1, int iNum2)
{
    int iAns = 0;

    if ((iNum1 < iNum2))
    {
        return -1;
    }

    iAns = iNum1 / iNum2;

    return iAns;
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;

    cout << "Enter First Number => "
         << "\n";
    cin >> iNo1;

    cout << "Enter Second Number => "
         << "\n";
    cin >> iNo2;

    iRet = Divide(iNo1, iNo2);

    cout << "Division of Given Two Numbers Is : " << iRet << "\n";

    return 0;
}