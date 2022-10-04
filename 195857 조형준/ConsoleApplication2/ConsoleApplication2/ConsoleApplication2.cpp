#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cin >> N;
    for (i = 1; i <= 100; i++){
        if (i % N == 0) {
            cout << i << " ";
        }
    }
    return 0;
}