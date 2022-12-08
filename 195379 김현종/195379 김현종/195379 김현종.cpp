// 195379 김현종.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//A.     정수 N 을 입력받아서 1-100 사이 숫자중 N으로 나누어 떨어지는 숫자 출력

//B.Ex) N = 5, 출력:5 10 15 20 … 100

#include <iostream>
using namespace std;


int main()
{
    int n, i;
    cout << "정수 N을 입력하세요. : ";
    cin >> n;
    cout << "N=" << n << ", 출력:";
    for (i = 1; n * i <= 100; i++) {
        cout << n * i<<" ";
    }
}


