#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "������ �Է��ϼ���: ";
	cin >> N;
	if (N <= 100)
		for (int i = 1; i <= 100; i++)
			if (i % N == 0)
				cout << i << endl;
	return 0;
}