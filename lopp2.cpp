#include <iostream>
using namespace std;
int main()
{
int numbers[10]={};
cout<<"enter the 10 numbers :\n";
for(int i=0;i<10;i++){
	cin>>numbers[i];
	}
	cout<<"The array is :"<<endl;	
for(int i=0;i<10;i++){
	cout<<numbers[i]<<"\t";
	}
}

