//The While Loop and the Do-while Loop

#include<iostream>
using namespace std;

int main(){ 
        
          int i = 1;
        //entry control loop
        cout<<"The While Loop:"<<endl;
          while(i<=10){
          	cout<<i<<endl;
          	i++;
		  }
		  
          i = 1;
       //exit control loop
       cout<<endl<<"The Do-While Loop:"<<endl;
       do{//loop gets executed atleast once
       cout<<i<<endl;//10
       i++;
       	
	   }while(i<=10);
	   
	}
