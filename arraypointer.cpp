#include <iostream>
using namespace std;
int main()
{
 int myArr[]={2,5,3,1,6,8};
int *pmyArr = myArr;
int *pmyArrstart = &myArr[0];
int *pmyArrend=&myArr[5];
for(int i=0;i<sizeof(myArr)/sizeof(int);i++,*pmyArrstart++){
cout<< *pmyArrstart<<endl;
if(pmyArrstart==pmyArrend){
	break;
}
}
}
//when you DONT  deference a pointer,the pointer is printed with reference syntax of an array;
//when you dereference a pointer ,the pointer is printed in itsz dereferencign form. but it prints the same first element because theres no i doe the loop(no  iteration),that is why the pointer is incremented in the for loop