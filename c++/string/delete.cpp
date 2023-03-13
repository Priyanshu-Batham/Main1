#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int pos,i;
	char line[50];
	cout<<"Enter a string:";
    gets(line); 
	cout<<endl;
	cout<<"Enter the position:";
	cin>>pos;
	
	pos--;
	for(i=pos;line[i] != '\0';i++){
	  line[i] = line[i+1];
	  if(line[i] == '\0'){
		  break;
	  }
	}
	
	
	cout<<line;
	
	return 0;	
}