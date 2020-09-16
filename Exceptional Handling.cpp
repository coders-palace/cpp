// Exceptional Handling - try, catch, throw
#include<iostream>
using namespace std;

main(){
	int x;
	cin>>x;
	try{
		if(x==0)
		 throw x;//integer
		if(x==1)
		 throw "character"; //string
	}catch(...){
		cout<<"general";
	}
	
	
}


