
/*

2. viết chương trình đảo ngược 1 chuỗi ký tự bất kỳ theo mẫu sau và tự sửa : 
VD: i wish i can learn C++ -> C++ learn can i wish i
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char s[100];
	cout<<"enter your string : ";
	gets(s);						//get string
	int l = strlen(s);			//l = length of string
	for(int i=l; i>=0; i--){		//i decrement tmp to 0
			if(s[i]==32 || i==0){	//if s[i] == space or i ==0;
				for(int j=i; j<=l; j++){	//j increment form i to l
					cout<<s[j];		//print string
				}
				l=i;
			}
	}
	
	
	return 0;
}
