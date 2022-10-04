
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "정수 N을 입력하세요 " ;
    cin >> n;

    for (int i = 0; i < 100; i++) {
        if ((i + 1)%5 == 0) {
            cout << i+1 << " " ;

        }
    }

}

