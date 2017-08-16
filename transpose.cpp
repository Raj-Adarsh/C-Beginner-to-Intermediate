#include<iostream>
#define max 100
using namespace std;
int main()
{
int temp=0;
int a[3][3];
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>a[i][j];
	}
}
for(int i=0;i<1;i++){
	for(int j=0;j<3;j++){
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
		cout<<a[i][j]<<"\t"<<flush;
	}
	cout<<endl;
}
}