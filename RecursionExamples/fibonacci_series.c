#include<iostream>
using namespace std;


int fibo(int n)
{
if(n==0 || n==1)
return 1;
else
return(fibo(n-1)+fibo(n-2));  
}

int main()
{
int n = 6;
//cout << "In fibonacci series number at 6 is = "<< fibo(n);
for(int i=0;i<=n;i++)
  cout << fibo(i);
}
