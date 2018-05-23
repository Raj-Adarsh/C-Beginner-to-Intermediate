#include <iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter the 1st number"<<endl;
cin>>a;
cout<<"Enter the 2nd number"<<endl;
cin>>b;
{
	if(a==1 || b==1){
		cout<<"1 is neither prime nor composite"<<a<<endl;
	}
	if(a==0 ||b==0){
		cout<<"0 is not prime"<<endl;
	 }
 
}
for(a;a<=b;a++){
    if(a%2!=0 &&a%3!=0){
		cout<<"These are prime numbers :\n"<<a<<endl;
	}
	
}

}







