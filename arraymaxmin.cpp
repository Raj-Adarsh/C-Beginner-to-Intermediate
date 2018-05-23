#include <iostream>
using namespace std;
int main()
{
int arr[10];
int sum=0,product =1;
cout<<"Enter the array"<<endl;
for(int i=0;i<10;i++){
cin>>arr[i];
}
for(int i=0;i<10;i++){
cout<<arr[i]<<"\t"<<endl;
}
for(int i=0;i<10;i++){
sum=sum+arr[i];
product=product*arr[i];
}
cout<<"The sum is :"<<sum<<endl;
cout<<"The product is :"<<product<<endl;
int max=arr[0],min=arr[0];
for(int j=1;j<10;j++){
if(arr[j]>max)
	max = arr[j];
else 
if(arr[j]<min)
		min = arr[j];
}		cout<<"MAX is :"<<max<<endl;
		cout<<"MIN is :"<<min<<endl;
}



/*#include <iostream>
using namespace std;
int main()
{
int arr[10];
for(int i=0;i<10;i++){
cin>>arr[i];
}
int max=arr[0],min=arr[0];
for(int j=1;j<10;j++){
if(arr[j]>max)
	max = arr[j];
else
if(arr[j]<min)
		min = arr[j];
}		cout<<"MAX is :"<<max<<endl;
		cout<<"MIN is :"<<min<<endl;
}*/

