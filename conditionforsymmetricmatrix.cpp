#include<iostream>
#include<stdlib.h>
#define max 100
using namespace std;
int main()
{
int m,n;
int a[max][max];
int transpose[max][max];
cout<<"enter the rows of the matrix"<<endl;
cin>>m;
cout<<"enter the columns of the matrix"<<endl;
cin>>n;
if(m!=n){
	cout<<"matrix is not symmetric"<<endl;
	exit(0);
}
if(m==n){
	cout<<"matrix is symmetric hence transpose can be found"<<endl;
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		transpose[i][j]=a[j][i];
		cout<<transpose[i][j]<<"\t"<<flush;
	}
	cout<<endl;
}
}
