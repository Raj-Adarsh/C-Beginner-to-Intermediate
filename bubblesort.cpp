//bubble sort
#include <iostream>
using namespace std;
int main()
{
int arr[]={4,2,88,95,34,12};
int temp=0;
for(int i=0;i<5;i++){
	for(int j=0;j<5-i;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}	
	}
}
for(int k=0;k<6;k++){
cout<<arr[k]<<endl;
}
}			
