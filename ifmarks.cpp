#include <iostream>
#include  <string>
using namespace std;

int main()
{
cout<<"If average marks>80 and <100,Grade=A"<<endl;
cout<<"If average marks>60 and <80, Grade=B"<<endl;
cout<<"If average marks>40 and <60, Grade=C"<<endl;
cout<<"If average <40,Grade=FAIL"<<endl;

double avg;
int phy,chem,maths,phe,comp;
int sum=0;

cout<<"Enter the marks obtained in physics"<<endl;
cin>>phy;
cout<<"Enter the marks obtained in chemistry"<<endl;
cin>>chem;
cout<<"Enter the marks obtained in maths"<<endl;
cin>>maths;
cout<<"Enter the marks obtained in phe"<<endl;
cin>>phe;
cout<<"Enter the marks obtained in computer"<<endl;
cin>>comp;

sum=phy+chem+maths+phe+comp;
avg=sum/5.0;
if   (avg>80 && avg<100)
     {
       cout<<"Grade=A";
	 }
	 
    
    if(avg>60 && avg<80)
      
        {
		   cout<<"Grade=B";
		}
          if(avg>40 && avg<60)
		      {
				  cout<<"Grade=C";
		      }
			    if(avg<40&& avg>0)
				    {
						cout<<"Grade=Fail";
					}
return 0; 			  
}	


