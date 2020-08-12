//Matrix


#include<iostream>
using namespace std;

int main(){
	    
        int a[2][2], b[2][2], c[2][2], m,n; 
        
        for( m=0; m<2; m++){
        	for( n=0; n<2; n++){
        		cout<<"a["<<m<<"]["<<n<<"]";
        		cin>>a[m][n];
			}
		}
		
		for( m=0; m<2; m++){
        	for( n=0; n<2; n++){
        		cout<<"b["<<m<<"]["<<n<<"]";
        		cin>>b[m][n];
			}
		}
		for( m=0; m<2; m++){
        	for( n=0; n<2; n++){
        	c[m][n] =	a[m][n] + b[m][n];//you can also try subtraction!
			}
		}
		
		for( m=0; m<2; m++){
        	for( n=0; n<2; n++){
        		cout<<c[m][n]<<endl;
			}
		}
		
		
        
	}
