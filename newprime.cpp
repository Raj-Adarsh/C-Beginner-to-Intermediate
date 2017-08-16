#include <iostream>
using namespace std;
int main()
{
cout<<"Enter max size of array"<<endl;
int max;
cin>>max;
int *primenumbers = new int[max];
int a,b,i=0;
cout<<"Enter the 1st number :";
cin>>a;
cout<<"Enter the 2nd number :";
cin>>b;	
if(a>b){
	cout<<"unexpected value.Was expecting the 2nd number to be greater than the 1st number"<<endl;
}	
for(a;a<=b;a++){	 
    if(a%2!=0 && a%3!=0 && a!=1 && a>0 && a%5!=0 && a%7!=0){
		cout<<"yoyo1";
		for(i=0;i<=max;i++){
			primenumbers[i]=a;
		}
	}	
	if(a==2 || a==3){
		cout<<"yoyo2";
		for(i=0;i<=max;i++){
			primenumbers[i]=a;
		}
	}	
	if(a==5 || a==7){
		cout<<"yoyo3";
		for(i=0;i<=max;i++){
			primenumbers[i]=a;
		}
	}
}
cout<<"The prime numbers are:\n"<<endl;
for(i=0;i<=max;i++){
	cout<<primenumbers[i]<<"\t"<<endl;
}
}