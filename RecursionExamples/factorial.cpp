#include<iostream>
using namespace std;

int factorialOf(int);
int main()
{
   int num;
   cout << "Enter number : " << endl;
   cin >> num;
   int factorial = factorialOf(num);
   cout << "Fact = " << factorial << endl;
}

int factorialOf(int num)
{
   if(num <= 0)
     return 1;
   else
     return( num * factorialOf(num-1));
}

