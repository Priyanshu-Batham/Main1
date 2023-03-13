#include <iostream>
#include <stdio.h>
using namespace std;


struct money{
    int rs;
    int ps;
};
struct money m1,m2; 
class Op{
	   
	char name[50];
	char address[100];
	int rs,ps;	
	
	
	public:
	
	
	void input(){
		cout<<"Enter your name:";
		gets(name);
		cout<<"Enter your address:";
		gets(address);
	}
	
	void inputMoney(){
		cout<<"Enter money:";
		cin>>m1.rs>>m1.ps;
		cin>>m2.rs>>m2.ps;
	}
	
	void output(){
		puts(name);
		cout<<endl;
		puts(address);
	}
	
	void money(struct money a, struct money b);
	
};




void Op::money(struct money a, struct money b){
	
	rs = a.rs + b.rs;
	ps = a.ps + b.ps;
	
	if(ps>99){
		rs = rs + ps/100;
		ps = ps % 100;
	}
	
	cout<<"Sum:"<<endl;
	cout<<rs<<" "<<ps;
}

int main(){
	Op hello;
	hello.input();
	hello.inputMoney();
	hello.output();
	hello.money(m1,m2);
	return 0;
}