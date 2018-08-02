
/*Viết chương trình in ra hình sau:
    0        0
    01      01
    010    010 
    0101  0101 
    0101001010
  */

#include<iostream>

using namespace std;

int main(){
	unsigned int n = 5;
//	cout<<"input your row : ";
//	cin>>n;

	for(int i=0; i<n; i++){				//loop i form 0 to n-1
		for(int j = 0; j <2*n; j++ ){	//loop j from 0 to 2n-1
			if(j<=i)					//if j<=i
			{
				cout<<j%2;				//display rem(j, 2)
			}
			else if(j+i<2*n-1)			//if j+i<2n-1
			{
				cout<<" ";				//display space
			}
			else cout<<(i+j+1)%2;		//display rem(i+j+1, 2)
		}
		cout<<"\n";
	}
	
	
	return 0;
}
