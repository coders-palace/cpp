//Classes and Objects


#include<iostream>
using namespace std;

class cuboid{
    public:
	float length;
	float breath;
	float height;
	
	void base(){
		cout<<length*breath<<endl;
	}
	
	void volume(){
		cout<<length*breath*height;
	}
};

int main(){
cuboid c;

c.length=12.2;
c.breath=11.5;
c.height=20.2;

c.base();
c.volume();
}

