#include <iostream>
using namespace std;
int main()
{
int input;
input=10;
cout<<"value of input : "<<input<<endl;
int* Xinput=&input;
cout<<"memory address of input :"<<Xinput<<endl;
cout<<"value of pointer :"<<*Xinput<<endl;
}
