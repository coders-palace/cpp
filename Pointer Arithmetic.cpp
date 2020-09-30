// Pointer Arithmetic
#include<iostream>
using namespace std;

main(){
	int* x,i=3;
	x=&i;
	cout<<x<<endl;
	x++;
	cout<<x;
	
	i=4;
	int *j;
	j=&i;
	cout<<j<<endl;
	j++;
	cout<<j<<endl;
	j=j+2;//exercise: j=j+5
	cout<<j<<endl;
	
    int var=5;
    int *p=&var;
    int **q=&p;
    cout<<var<<endl;
    cout<<*p<<endl;
    *p+2;
    cout<<var;
}

