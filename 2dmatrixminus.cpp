#include<iostream>
#define max 100
using namespace std;
int main()
{
int a[3][3];
int b[3][3];
cout<<"ENTER THE 1ST MATRIX"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>a[i][j];
	}
}
cout<<"THE ENTERED MATRIX IS"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<a[i][j]<<"\t"<<flush;
	}
	cout<<endl;
}
cout<<"ENTER THE 2ND MATRIX"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>b[i][j];
	}
}
cout<<"THE ENTERED MATRIX IS"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<b[i][j]<<"\t"<<flush;
	}
	cout<<endl;
}
int s=0,c[max][max];
cout<<"THE 	DIFFERENCE OF THE MATRIX IS"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		c[i][j]=a[i][j]-b[i][j];
		cout<<c[i][j]<<"\t"<<flush;
	}
	cout<<endl;
}
}