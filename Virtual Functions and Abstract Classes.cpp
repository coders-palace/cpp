//Virtual Functions and Abstract Classes
#include<iostream>
using namespace std;

class base
{
	public:
		virtual void display(){
			cout<<"Base";
		}
};

class derived:public base{
	
	public:
		void display(){
			cout<<"Derived";
		}
};

int main(){
  base* b;//base pointer
  derived d;
  b= &d ;
  b->display();//Late Binding
}
