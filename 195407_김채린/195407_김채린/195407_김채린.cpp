#include <iostream>
using namespace std;

int main(int argc, char* argv[], char* env[])
{
	// 숫자를 입력받을 변수 선언
	int nInputNumber;

	// 숫자 입력받기
	cout << "N=";
	cin >> nInputNumber;

	// 예외처리
	if (nInputNumber >= 1 && nInputNumber <= 100)
	{
		// 출력
		cout << "출력:";
		for (int i = 1; i <= 100; i++)
			if (i % nInputNumber == 0)
				cout << i << " ";

		// 정상종료
		return 0;
	}
	// 1과 100사이의 숫자가 아닌경우
	else
	{
		cout << "잘못된 입력입니다.";
		return 1;
	}
}