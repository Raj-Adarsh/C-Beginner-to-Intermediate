#include <iostream>
using namespace std;

int main ()
{

int i;

for(;;){
	cout<<"Type in a number to generate a random number:";
cin>>i;
i=i*2;
i++;
cout<<"The answer is :"<<i<<endl;
}
}