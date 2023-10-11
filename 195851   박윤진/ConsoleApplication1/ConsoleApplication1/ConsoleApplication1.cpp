

#include "stdafx.h"

#include <iostream>



using namespace std;



int main()

{

    int number1 = 0;

    int number2 = 0;



    cout << "비교할 두 정수를 입력하시오: ";

    cin >> number1 >> number2;



    if (number1 == number2)

        cout << number1 << " == " << number2 << endl;



    if (number1 != number1)

        cout << number1 << " != " << number2 << endl;



    if (number1 < number2)

        cout << number1 << " < " << number2 << endl;



    if (number1 > number2)

        cout << number1 << " > " << number2 << endl;



    if (number1 <= number2)

        cout << number1 << " <= " << number2 << endl;



    if (number1 >= number2)

        cout << number1 << " >= " << number2 << endl;



    return 0;

}