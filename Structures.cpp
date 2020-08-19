//Structures - user defined data type
//Name, Roll no, Marks

#include<iostream>
using namespace std;

struct car{
	string brand;
	int price;
	string color;
};

int main(){
	  car c1;
	  cin>>c1.brand>>c1.price>>c1.color;
	  cout<<c1.brand<<" "<<c1.price<<" "<<c1.color;
	}
