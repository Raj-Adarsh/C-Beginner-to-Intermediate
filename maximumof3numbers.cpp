# include<iostream>
using namespace std;
int max(int a,int b,int c)
{
int d=0,maximum=0;
if(a>b){
	d=a;
}
else{
	d=b;
}
if(d>c){
	maximum=d;
}
else{
	maximum=c;
}	
cout<<maximum<<endl;
}
int main()
{
int a,b,c;//have to declare 2 times??yes!
cout<<"Enter the numbers"<<endl;
cin>>a>>b>>c;
max(a,b,c);
}