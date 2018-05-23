#include <iostream>
using namespace std;
int main()
{
int n=0,c=0,d=0;
cout<<"Enter the number"<<endl;
cin>>n;
do{
	d=n%10;
	if(d==0)
	c++;
	n=n/10;

}while(n>0);s
if(c>0)
cout<<"Duck number"<<endl;
else
cout<<"Not Duck number"<<endl;
}	



/*1503%10
d=3;
d=*/