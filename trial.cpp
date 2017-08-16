#include <iostream>
using namespace std;
int primenumber(int a,int b)
{
	int arrayP[5]={};
cout<<"the prime numbers are :"<<endl;
int i;
for(a;a<=b;a++){	 
	if(a%2!=0 && a%3!=0 && a!=1 && a>0 && a%5!=0 && a%7!=0){
		arrayP[i]==a;
	}		
	if(a==2 || a==3){
		arrayP[i]==a;
	}	
	if(a==5 || a==7){
		arrayP[i]==a;
	}
}
cout<<"new outputs....."<<endl;
cout<<arrayP[0]<<endl;
cout<<arrayP[1]<<endl;
cout<<arrayP[2]<<endl;
cout<<arrayP[3]<<endl;
cout<<arrayP[4]<<endl;	
return a;
}
int main()
{
int a,b;
int arrayP[5]={};
int *pprimenumber[5]=&primenumber[5];
cout<<"Enter the 1st number :";
cin>>a;
cout<<"Enter the 2nd number :";
cin>>b;	
if(a>b){
	cout<<"unexpected value.Was expecting the 2nd number to be greater than the 1st number"<<endl;
}	
 primenumber(a,b);
 for(int i=0;i<5;i++){
	 cout<<*pprimenumber[i]<<"\t"<<endl;
}
}  