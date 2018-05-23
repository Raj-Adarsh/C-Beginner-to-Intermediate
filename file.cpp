//data file handling
#include <iostream>
#include <fstream>
using namespace std;
class student{
	private:
		char name[20];
		int age;
		int height;
		int weight;
	public:
		void getdata();
		void display();
};
void student::getdata()
{
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"Enter the height"<<endl;
	cin>>height;
	cout<<"Enter the age"<<endl;
	cin>>age;
	cout<<"Enter the weight"<<endl;
	cin>>weight;
}
void student::display()
{
	cout<<"The name is :"<<name<<endl;
	cout<<"The height is :"<<height<<endl;
	cout<<"The age is "<<age<<endl;
	cout<<"The weight is :"<<weight<<endl;
}
int main()
{
	class student info[10];
	fstream file;
	int n;
	char fname[10];
	cout<<"Enter the name of the file to be opened"<<endl;
	cin>>fname;
	cout<<"how many students"<<endl;
	cin>>n;
	cout<<"Enter the following information"<<endl;
	file.open(fname,ios::out);
	for(int i =0;i<n;i++){
		info[i].getdata();
		file.write((char*) &info[i],sizeof(info[i]));
		file.close();
	}
	file.open(fname,ios::in);
	for(int i =0;i<n;i++){
		file.read((char *) &info[i],sizeof(info[i]));
		info[i].display();
		file.close();
	}
}











