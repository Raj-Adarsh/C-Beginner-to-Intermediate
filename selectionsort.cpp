//selection sort
#include <iostream>
using namespace std;
int main()
{
int arr[]={4,2,88,95,34,12};
int temp=0,p=0,min=0;
for(int i=0;i<6;i++){
		min=arr[i];
		p=0;
		for(int k=i+1;k<6;k++){
			if(arr[k]<min){
				min=arr[k];
				p=k;
			}
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;
		}
}
cout<<arr[p]<<endl;
}