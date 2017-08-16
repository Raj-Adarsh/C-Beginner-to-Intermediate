#include <iostream>
using namespace std;
template<class X,class Y>
Y add(X a,Y b){
	return a+b;
}	
int main()
{
	int x=100;
	float y=12.5;
	
	cout<<add(x,y)<<endl;
}
//cant overcome the restriction if i use X.