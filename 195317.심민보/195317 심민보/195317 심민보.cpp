#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "정수를 입력하세요: ";
	cin >> N;
	if (N <= 100)
		for (int i = 1; i <= 100; i++)
			if (i % N == 0)
				cout << i << endl;
	return 0;
}