#include<iostream>
using namespace std;
int main()
{
int arr1[]={2,4,6,8};
int arr2[]={1,3,5,7};
int arr[8];
int x=0;
int i;
for(i=0;i<8;i=i+2){
	arr[i]=arr1[x];
	arr[i+1]=arr2[x];
	x++;
}
cout<<arr[i]<<endl;
}