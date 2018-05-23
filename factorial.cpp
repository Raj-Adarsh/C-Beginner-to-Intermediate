#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int i;long longs int fact=1; int n;
cout<<"Enter the number for factorial"<<endl;
cin>>n;
while(n<0){
	cout<<"Not possible bro"<<endl;
	exit(0);
}	
if(n==0){
	cout<<"the factorial is 0"<<endl;
	exit(0);
}	
for(i=1;i<=n;i++){
	fact=i*fact;
}
	cout<<"The factorial is : "<<fact<<endl;	
}