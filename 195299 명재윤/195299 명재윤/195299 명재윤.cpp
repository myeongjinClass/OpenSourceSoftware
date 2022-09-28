#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "1~100사이의 숫자를 입력해주세요" << endl;
	cin >> n;

	if (1 <= n <= 100)
	{
		for (int i = 1; i <= 100; i++)
		{
			if (i % n == 0)
				cout << i << " ";
		}
	}
	return 0;
}