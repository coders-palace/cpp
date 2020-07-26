//Function Overloading 
//two or more functions have the same name
/*circle
  rectangle
  triangle*/
  
#include<iostream>
using namespace std;

void area(int r){
	cout<< 3.14*r*r<<endl;
}

void area(int l, int b){
	cout<< l*b<<endl;
}

void area(float b, float h){
	cout<<1/2*b*h;
}

int main(){
	//area of a circle = pi r^2
	cout<<"Circle";
	int r;
	cin>>r;
	area(r);
	//area of rectangle = l * b
	cout<<"Rectangle";
    int l, b;
	cin>>l>>b;
	area(l, b);
	//area of a triangle = 1/2 * b* h
	cout<<"Triangle";// 
	float base,h;
	cin>>base>>h;
	area(base,h);
}
