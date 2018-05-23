#include <iostream>
using namespace std;
template < class T>
class sample{
	private:
	T age,height;
	public:
	sample(){};
	T display();
	T getinfo();
};
template < class T>
T sample<T>::getinfo()
{
	cin>>height>>age;
}
template < class T>
T sample<T>::display()
{	
	cout<<height<<age<<endl;
}
int main()
{	
 sample<int> obj;
	obj.getinfo();
	obj.display();
}	
//overcome the restriciton???