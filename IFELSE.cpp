// The IF and the ELSE Stataements
#include<iostream>
using namespace std;

int main(){
	int x = 1, y = 2 , z = 3;
	
	if(x > y){
		if(x > z){
			cout<<x;
		}
		
		else
		  cout<<z;
	}
	
	else{
		if(y>z)
		  cout<<y;
		  
		cout<<z;  
	}
	
	}
