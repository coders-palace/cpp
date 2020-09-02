//Friend Functions - access private and the protected members of a class
#include<iostream>
using namespace std;

class cuboid{
     private:
     	float length;
     	float breadth;
     	float height;
     	
     public:
	    friend void volume(cuboid c); 
		void set(float x, float y, float z){
			length = x;
			breadth = y;
			height = z;
		}	
  };

void volume(cuboid c){
	cout<<c.length*c.breadth*c.height;
}



int main(){
  cuboid c;
  c.set(10,20,30);
  volume(c);
}
