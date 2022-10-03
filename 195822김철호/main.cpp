#include <iostream>

using namespace std;

int main() {
    int n, i;

    cout << "N을 입력하시오" <<endl;
    cin >> n;
    cout << "1 ~ 100까지의 숫자중 " << n <<"(으)로 나누어 떨어지는 수" << endl;

    int count = 100/n;
    for(i=1;i<=count;i++){
        cout << i*n <<" ";
    }

    cout <<endl << "총 "<< count <<"개";

    return 0;
}
