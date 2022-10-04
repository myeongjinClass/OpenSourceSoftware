#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int a = 0;
	cout << "정수 입력 : ";
	cin >> a;
	for (i = 0; i < 100; i++)
	{
		if ((i + 1) % a == 0)
			cout << i + 1<<' ';
	}
	return 0;
}