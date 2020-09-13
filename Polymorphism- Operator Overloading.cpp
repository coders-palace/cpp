//Polymorphism:Operator Overloading

#include<iostream>
using namespace std;


// a(real) + ib(imaginary)

struct complex{
	int real;
	int img;
	
	void getdata(){
		cin>>real>>img;
	}
	
	complex operator + (complex c2 ){
		complex t;
		t.real = real + c2.real;
		t.img  = img + c2.img;
		return t;
	}
};

main(){
    complex c1, c2, c3; // c3 = c1 + c2
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2; //function calling
    cout<<c3.real<<"+"<<c3.img;
}


