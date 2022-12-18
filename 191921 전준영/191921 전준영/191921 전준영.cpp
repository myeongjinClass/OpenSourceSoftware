#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    
    for (i = 1; i < 101; i++)
        if (i % n == 0)
            cout << i << " ";

    return 0;
}
// 정수 n을 입력받아서 1- 100사이 숫자중 n으로 나누어 떨어지는 숫자 출력