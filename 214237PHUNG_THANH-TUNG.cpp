﻿#include <iostream>
using namespace std;
int main()
{
 int n;   
 cout<< "n를 입력하세요!";
 cin>>n;
  
  for(int i=1; i<=100;i++)
    if(i%n==0)
    cout<<i<<" ";
return 0;
}