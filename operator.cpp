#include<iostream>
using namespace std;
class vector{
public:
	int x,y;
	vector(int a,int b){
		x=a;
		y=b;
	}
	vector operator+(const vector&);
};
	vector vector::operator+(const vector&,int m){
		vector temp;
		temp.x=x+m.x;
		temp.y=y+m.y;
		return temp;
	}
int main(){
vector v1(10,20);
vector v2(30,40);
vector result;
result= v1+v2;
cout<<result<<endl;
}
	