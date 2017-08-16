#include <iostream>
using namespace std;
int add(int a,int b){
	int value=a+b;
	return(value);
}	
int sub(int a,int b){
	int value=a-b;
	return(value);
}	
int main()
{
	int x,a,b,value;
	//int add(int,int);
	//int sub(int,int);
	int(*ptradd)(int,int);
	int(*ptrsub)(int,int);
	ptradd=&add;
	ptrsub=&sub;
	cout<<"Enter Choice"<<endl;
	cout<<"1)add 2)sub"<<endl;
	cin>>x;
	cout<<"enter the 1st number"<<endl;
	cin>>a;
	cout<<"Enter the 2nd number"<<endl;
	cin>>b;
	if(x==1){
		value =(*ptradd)(a,b);//add(a,b);
		cout<<value;
	}	
	else{
		value =(*ptrsub)(a,b);//sub(a,b);
		cout<<value;
	}
}		