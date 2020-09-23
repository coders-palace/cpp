// Template
#include<iostream>
using namespace std;

template <class T>
void  swap(T &a,T &b){
	T t;
	t=a;
	a=b;
	b=t;
	
}


main(){
int a,b;
cin>>a>>b;
swap(a,b);
cout<<a<<" "<<b;
}


