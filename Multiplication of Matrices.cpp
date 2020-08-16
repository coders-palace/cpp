//Multiplication of  Matrices


#include<iostream>
using namespace std;

void multiply(int a[2][2],int b[2][2],int c[2][2]){
	int i,j,k;
	for( i=0;i<2;i++){
		for( j=0;j<2;j++){
			c[i][j] = 0;
			for( k=0;k<2;k++){
			c[i][j]	+=a[i][k] * b[k][j];
				
			}
		}
	}
}

int main(){
	    int a[2][2], b[2][2], c[2][2];
	    
	    for(int i=0; i<2 ;i++){
	    	for(int j=0; j<2; j++){
	    		cout<<"enter value of"<<i<<"  "<<j;
	    		cin>>a[i][j];
			}
		}
		
		for(int i=0; i<2;i++){
	    	for(int j=0; j<2; j++){
	    		cout<<"enter value of"<<i<<"  "<<j;
	    		cin>>b[i][j];
			}
		}
		
		multiply(a,b,c);
		
		for(int i=0; i<2 ;i++){
	    	for(int j=0; j<2; j++){
	    		cout<<c[i][j]<<endl;
			}
		}
		
	    
	}
