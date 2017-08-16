#include<iostream>
using namespace std;

int main()
{
int l,b,a;
float r;
int ch=0;
void area(int l,int b);
void area(int a);
void area(float r);
cout<<"ENTER THE CHOICE.1>RECT. 2>square 3> cirlce " <<endl;
cin>>ch;
if(ch==1){
cout<<"Lenght and Breadth of rectangle "<<endl;
cin>>l>>b;
area(l,b);
}
else 
if(ch==2){
	cout<<"side of square "<<endl;
	cin>>a;
	area(a);

}
else
if(ch==3){
	cout<<"IF you want to find area of circle,enter r in float value!"<<endl;
	cout<<"RAdius of circle"<<endl;
	cin>>r;
	area(r);
}
}
void area(int l,int b){
cout<<"rectangle :"<<"\t"<<l*b<<endl;
}
void area(int a){
cout<<"square :"<<"\t"<<a*a;
}
void area(float r){
cout<<"Circle"<<3.14*r*r<<"\t"<<endl;
}

