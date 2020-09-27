// Pointers - variables which store address of another variable
#include<iostream>
using namespace std;

main(){
 
 float x=5.2;
 cout<<&x<<endl;//address of x 
 
 float* p;//pointer variable
 p = &x;//stores the address of x
 cout<<&p<<endl;
 
 float** q;//pointer to pointer variable
 q = &p;//stores the address of pointer p
 cout<<*q;//dereferencing
}


