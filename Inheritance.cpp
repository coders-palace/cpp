#include<iostream>
using namespace std;
//single inheritance
class school{
	public:
	string name;
	string address;
	int phone_no;
};

class college:public school{
	public:
			
	string major;
};

int main(){
 college c;
 cin>>c.phone_no;
 cout<<c.phone_no;
}
