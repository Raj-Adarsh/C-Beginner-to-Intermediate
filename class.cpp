#include <iostream>
using namespace std;
class student{
private:
int rollno;
char name[20];
string dept;//**
int age;

public:
void getinfo()
{
cout<<"Enter the name"<<endl;
cin>>name;
cout<<"Enter the rollnumber"<<endl;
cin>>rollno;
cout<<"Enter the age"<<endl;
cin>>age;
cout<<"Enter the department"<<endl;
cin>>dept;
}
void display()
{
cout<<"The name is :"<<name<<endl;
cout<<"The rollnumber is:"<<rollno<<endl;
cout<<"The age is "<<age<<endl;
cout<<"The department is :"<<dept<<endl;
}
};
int main()
{
int n;
class student info[10];
cout<<"Details of how many students"<<endl;
cin>>n;
if(n<=10){
	cout<<"Enter the data"<<endl;
for(int i=0;i<n;i++){
	info[i].getinfo();
}	
cout<<"Display the data"<<endl;
for(int i=0;i<n;i++){
info[i].display();
}
}
}