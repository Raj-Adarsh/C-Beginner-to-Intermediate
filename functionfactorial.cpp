#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int n,factorial=0;
int facT(int);
cout<<"Enter the number for factorial"<<endl;
cin>>n;
factorial=facT(n);
cout<<"the factorial is "<< factorial<<endl;
}

int facT(int n)
{
int i;long int fact=1;
for(i=1;i<=n;i++){
	fact=i*fact;
}
return fact;	
}