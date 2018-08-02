#include<iostream>
using namespace std;
float sum(int n);
int main(){
	int n=1;
	while(n++){
		cout<<"sum: "<<sum(n)<<endl;	
	}
}

float sum(int n){
	if(n==1)return ((float)1/48) ;
	return ((float) 1)/(2*n*(2*n+2)*(2*n+4))+sum(n-1); 
}
