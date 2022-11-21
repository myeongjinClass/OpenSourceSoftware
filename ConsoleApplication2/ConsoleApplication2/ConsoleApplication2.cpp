#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int t = 1;
    while (N * t <= 100)
    {
        cout << N * t++ << endl;
    }
    return 0;
}
