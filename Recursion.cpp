//Recursion - function calls itself

#include<iostream>
using namespace std;

int abcd(int i){
	if(i==1)//comparision operator
	cout<<i;
	
	else{
		i--;
		return(abcd(i));//Recursion- calling the same function
	}
}

int main(){
	int i=2;
	abcd(i);
}
