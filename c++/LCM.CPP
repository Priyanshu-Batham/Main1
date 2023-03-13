#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int lcm(int a,int b){
  int pro=1;


  while(a!=1 && b!=1){
  int big;
  if(a>b){
    big=a;
  }
  else{
    big=b;
  }
    for(int i=2;i<big;i++){
      if(a%i==0 && b%i==0){
	a=a/i;
	b=b/i;
	pro=pro*i;
	break;
      }
      else if(a%i==0 && b%i !=0){
	a/=i;
	pro*=i;
	break;
      }
      else if(a%i!=0 && b%i == 0){
	b/=i;
	pro*=i;
	break;
      }
      else{
	continue;
      }
  }
}
  return pro;
}

int main(){
  int result;
  result=lcm(12,24);
  cout<<result;
  return 0;
}