// Call by Value v/s Call by Reference
#include<iostream>
using namespace std;

void swap(int *m, int *n){
	int s;
	s=*m;
	*m=*n;
	*n=s;
}

main(){
int m,n;
   cin>>m>>n;
   
   swap(&m,&n);//call by value
   cout<<m<<" "<<n;
}


