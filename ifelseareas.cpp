#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
double l,b,a,Area,r;
int ch;
cout<<"Choose one of the following : \n 1.Square \n 2.Rectangle \n 3.Circle"<<endl;
cin>>ch;
if(l<0 || b<0 || r<0 || a<0){
	cout<<"Lenght cannot be negative"<<endl;
	exit(0);	}
if(ch==1){
	cout<<"Enter the side lenght of the square"<<endl;
	cin>>a;
	if(l<0 || b<0 || r<0 || a<0){
		cout<<"Lenght cannot be negative"<<endl;
		exit(0);
	}
	Area=a*a;
	cout<<"The Area of the square is : "<<Area<<endl;
	exit(0);
}
else if(ch==2){
	cout<<"Enter the Lenght of the rectangle"<<endl;
	cin>>l;
		if(l<0 || b<0 || r<0 || a<0){
		cout<<"Lenght cannot be negative"<<endl;
		exit(0);
		}
	cout<<"Enter the Breadth of the rectangle"<<endl;
	cin>>b;
if(l<0 || b<0 || r<0 || a<0){
	cout<<"Lenght cannot be negative"<<endl;
	exit(0);
}
	Area=l*b;
	cout<<"The Area of the Rectangle is :"<<Area<<endl;
	exit(0);
}
else if(ch==3){
	cout<<"Enter the Radius of the circle"<<endl;
	cin>>r;
	if(l<0 || b<0 || r<0 || a<0){
		cout<<"Lenght cannot be negative"<<endl;
		exit(0);
	}
	Area=3.14*r*r;
	cout<<"The Areaof the circle is :"<<Area<<endl;
}	
	else{
			cout<<"Please choose either of the three displayed options"<<endl;
	}
		
}
