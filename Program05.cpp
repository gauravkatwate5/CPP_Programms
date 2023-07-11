#include <iostream>
using namespace std;

void print(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout << "*"
             << "\t";
    }
}

int main()
{
    int iNo = 0;

    cout << "Enter Any Number : "
         << "\n";
    cin >> iNo;

    print(iNo);

    return 0;
}