/*
count charater display have frequence max and min
if you have character " . " or " , " them you space and ....
//if the program have charater display 4 times or more the print "this is a spam và termiate "
*/

#include"iostream"
#include"string.h"
#include"stdlib.h"


using namespace std;

/*set up arr save data when you input*/

char a[100];		//arr save string when you input
int b[100];			//arr save string after covert int 
int l;				//length of arr a
int fre[100];		//arr save frequence element on arr a
char s[10];			//save word first in arr a
char c[100];
int count;
  	
int main(){
	int  i = 0, j = 0;	//set up variable 
	int max = 0;
	int min = 0;
	cout<<"enter your string : ";gets(a); //input string
	l = strlen(a);		//l is length of string a
	for(i= 0;i<l;i++){
		fre[i]=0;		//set up frequence of character =0
		b[i] = (int )a[i];	//convert string to int
	}

/*create frequence of character*/
	for(i= 0;i<l;i++)	//loop
	{	fre[0] = 1;
		for(j = 0;j<l;j++)	//loop
		{
			if(b[i]==b[j])		//if two element sqare
			{
				fre[i] +=1;		//increment frequence element of character
			}
		}
	}
	
/*find frequency character display max,min on string */
	max = fre[0];				//set up fre min = fre max = fre[0]
	min = fre[1];
	for(i=1;i<l;i++){
		if(a[i]!=32){
			max = (max >fre[i])? max:fre[i];		//max = max if max > fre[i] else max = fre[i] if max <fre[i]
			min = (min <fre[i])? min:fre[i];		//min = min if min < fre[i] else min = fre[i] if min >fre[i]
		}
	}	
/*	print character display min on string */
	cout<<"character frequenly display min : ";
	if(min>1){
		for(i=0;i<l;i++){		//use loop to find fre[i] = min
			if(fre[i]==min && a[i]!=32){
				cout<<a[i]<<" ";
				break;	//print all element have fre[i] = min
			}
		
		}
		cout<<"with "<<min <<" times"<<endl;
	}
	else {
		for(i=0;i<l;i++){		//use loop to find fre[i] = min
			if(fre[i]==min && a[i]!=32){
				cout<<a[i]<<" , ";	//print one element have fre[i] = min
			}
		}
		cout<<"with "<<min <<" time"<<endl;
	}
/*	print character display max on string */
	
	cout<<"character frequenly display max: ";
	for(i=0;i<l;i++){		//use loop to find fre[i] = max
		if(fre[i]==max && a[i]!=32){
			cout<<a[i]<<" ";	//print element have fre[i] = max
			break;				//exit loop
		}
	}
	cout<<"with "<<max <<" times"<<endl;
	


	

	return 0;
}
