#include <iostream>

using namespace std;
int main()
{
	int num;
	cin >> num;
	cout << "N = " << num << ", ";
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 == 0)
			cout << i<< " ";
	}

}