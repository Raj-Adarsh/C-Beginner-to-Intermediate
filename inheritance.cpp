#include <iostream>
#include <stdlib.h>
using namespace std;
class student{
private:
char name[20];
string dept;//**
int age;

public:
void getinfo();
void display();
};
class physical:public student{
private:
int height;
int weight;
public:
void getinfo();
void display();
};
void student :: getinfo()
{
cout<<"Enter the name"<<endl;
cin>>name;
cout<<"Enter the age"<<endl;
cin>>age;
cout<<"Enter the department"<<endl;
cin>>dept;
}
void student ::display()
{
cout<<"The name is :"<<name<<endl;
cout<<"The age is "<<age<<endl;
cout<<"The department is :"<<dept<<endl;
}
void physical::getinfo()
{
student ::getinfo();
cout<<"enter the height in cms"<<endl;
cin>>height;
cout<<"enter the weight in kgs"<<endl;
cin>>weight;
}
void physical :: display()
{
student ::display();
cout<<"The height in cms is:"<<height<<endl;
cout<<"The weight in kgs are :"<<weight<<endl;
}
int main()
{
	int n;
	class physical fitness[10];
	cout<<"How many students(trial program,less than 10)"<<endl;
	cin>>n;
	if(n<=10){
		for(int i=0;i<n;i++){
			cout<<"Enter the following information"<<endl;
			fitness[i].getinfo();
		}
		for(int i=0;i<n;i++){
			cout<<"The entered info is "<<endl;
			fitness[i].display();
		}
	}	
}	
	



