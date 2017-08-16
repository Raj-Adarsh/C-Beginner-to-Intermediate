#include <iostream>
#include <string>
using namespace std;

int main()
{
int a;int a1=0;
do{
cout<<"Type any number to find your lucky number"<<endl;
cin>>a;

a1=a/2+6 ;
cout<<"Your lucky number is :"<<a1<<endl;
break;
}while(a<10);
return 0;
}