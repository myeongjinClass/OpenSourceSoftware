#include <iostream>
using namespace std;

int main() {

	int insert_int;

	cout << "정수를 입력하세요: ";
	cin >> insert_int;

	cout << insert_int << "으로 나누어 떨어지는 숫자: ";

	for (int i = 1; i <= 100; i++ ) {
		if ( i % insert_int == 0 ){
			cout << i << " ";
		}
		else{
			
		}
	}

	return 0;
}
