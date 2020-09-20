// File Handling 
#include<iostream>// cin, cout
#include<fstream>// ofstream, ifstream
using namespace std;

//student - name, roll number
main(){
	char info[50];
	ofstream obj1;//write to a file
	obj1.open("student.dat");
	//name
	cout<<"Enter name:";
	cin.getline(info,50);//user to main memory
	obj1<<info<<endl;//main memory to file
	//roll  number
	cout<<"Enter roll number:";
	cin>>info;
	obj1<<info<<endl;
	obj1.close();
	
	ifstream obj2;
	obj2.open("student.dat");
	
	//read from file
	//name
	obj2>>info;//from file to main memory
	cout<<info<<endl;
	//roll no
	obj2>>info;
	cout<<info<<endl;
	obj2.close();
}


