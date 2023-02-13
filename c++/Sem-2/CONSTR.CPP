#include<iostream.h>
#include<conio.h>
//class definition
class SI{
  int p,r,t,res;
  public:
  //default constructor
  SI(){
    p=1000;
    r=10;
    t=2;
  }

  //parameterized constructro
  SI(int x, int y, int z){
    p=x;
    r=y;
    t=z;
  }

  //copy constructor
  SI(SI &A){
    p=A.p;
    r=A.r;
    t=A.t;
  }

  //defining the function for this class
  void calc(){
   res=(p*r*t)/100;
   cout<<"Result:"<<res<<endl;
  }
};


void main(){
  clrscr();
  SI obj;
  obj.calc();
  SI obj1(500,5,2);
  SI obj2=obj1;
  obj1.calc();
  obj2.calc();
  getch();
}