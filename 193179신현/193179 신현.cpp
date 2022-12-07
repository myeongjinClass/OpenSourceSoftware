#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "숫자입력: ";
    cin >> num;

    for (int i = 1; i <= 100; i++)
    {
        if(i% num ==0)
        cout << i << "  ";
    }
}

