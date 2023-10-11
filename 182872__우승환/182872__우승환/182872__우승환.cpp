#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "정수 N을 입력하시오 : ";
    cin >> n;

    for(int i =0; i<101;i++)
    {
        if(i%n==0)
        {
            cout<<i<<endl;
        }
    }

}

