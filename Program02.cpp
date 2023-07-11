#include <iostream>
using namespace std;

void Display(int ino)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= ino; iCnt++)
    {
        cout << "Hello World"
             << "\n";
    }
}

int main()
{
    Display(5);
    return 0;
}