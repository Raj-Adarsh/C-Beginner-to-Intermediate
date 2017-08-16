#include <iostream>
using namespace std;
int main()
{
int tryArray[10]={};
cout<<"Enter the Array"<<endl;
for(int i=0;i<=10;i++){
cin>>tryArray[i];
}
cout<<"DISPLAYING""<<endl;
for(int i=0;i<=10;i++){
	cout<<"\t"<<tryArray[i]<<endl;
}	
}