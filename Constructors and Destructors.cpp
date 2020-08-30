//Constructors and Destructors
#include<iostream>
using namespace std;

class sample{
	
	public:
		int a;
		sample(){
			cout<<"This is a constructor"<<endl;//1
		}
		
		~sample(){
			cout<<"This is a destructor";//3
		}
};

int main(){
	sample s;//constructor
	cout<<"This is the statement"<<endl;//2
}
