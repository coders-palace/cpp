//Concept of Overriding
#include<iostream>
using namespace std;

class base{
	public:
	void sample(){
		cout<<"base";
	}
};

class derived: public base{
	public:
	void sample(){
		cout<<"derived";
	}
};

int main() 
{   base b;
    derived d;
    d.sample();//function overriding
} 
