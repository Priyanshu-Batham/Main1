#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int pos,i,j;
	char line[50];
	char ch,temp;
	cout<<"Enter a string:";
	cin>>line;
	cout<<endl;
	cout<<"Enter the character to insert:";
	cin>>ch;
	cout<<endl;
	cout<<"Enter the position:";
	cin>>pos;
	
	pos--;
	for(i=pos;line[pos] != '\0';i++){
	  temp = line[pos];
	  line[pos] = ch;
	  ch = temp;
	  pos++;
	}
	line[pos] = ch;
	line[pos+1] = '\0';
	
	cout<<line;
	
	return 0;	
}