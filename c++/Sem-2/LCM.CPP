#include <iostream>
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib>
using namespace std;

int lcm(int a, int b)
{
  int pro = 1,flag=0;

  while(flag==0)
  {
    int big,i=2;
    if (a > b)
    {
      big = a;
    }
    else
    {
      big = b;
    }
    for (i; i <= big; i++)
    {
      // cout<<"value of i:"<<i<<endl;
      if (a % i == 0 && b % i == 0)
      {
        a = a / i;
        b = b / i;
        pro = pro * i;
        // cout<<i<<a<<b<<" "<<pro;
        break;
      }
      else if (a % i == 0 && b % i != 0)
      {
        a /= i;
        pro *= i;
        break;
      }
      else if (a % i != 0 && b % i == 0)
      {
        b /= i;
        pro *= i;
        // cout<<b;
        break;
      }
      else
      {
        continue;
      }
    }
    if(a==1){
      if(b==1){
        flag=1;
      }
    }
    cout<<a<<"and"<<b<<"for"<<i<<"answer="<<pro<<endl;
  }
  return pro;
}

int main()
{
  int result;
  result = lcm(45, 21);
  cout << "Result:"<<result;
  return 0;
}