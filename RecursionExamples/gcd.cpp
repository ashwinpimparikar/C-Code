#include<iostream>
using namespace std;

int getGCD(int num1, int num2)
{
   if(num1==0)
     return num2;
   else if(num2==0)
     return num1;

   if(num1>num2)
    getGCD(num1%num2,num2);
   else if(num2>num1)
    getGCD(num1,num2%num1);
}

int main()
{
   int num1,num2;
   cout << "GDC of 6 & 4 is = " << getGCD(6,4)<<endl;
   cin >> num1;
   cin >> num2;
   cout << "GCD of given number = " << getGCD(num1,num2)<<endl;
}
