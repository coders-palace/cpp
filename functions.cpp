//Fuctions
#include<iostream>
using namespace std;

int compare(int x , int y){
	if(x > y)
        return x;
      else 
	    return y;  
}

int main(){
      int x = 5, y = 6, m = 10, n = 20;
      cout<<compare(x, y)<<endl;
      cout<<compare(m,n);
        
}
