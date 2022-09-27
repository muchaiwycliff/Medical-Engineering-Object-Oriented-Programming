// Program for grading system
#include <iostream>
using namespace std;
int main()
{
	int Maths,Eng,French,Sci,CRE,avg;
	cout<<"Enter the marks for 5 units"<<endl;
	cout<<"Maths"<<endl;
	cin>>Maths;
	cout<<"Eng"<<endl;
	cin>>Eng;
	cout<<"French"<<endl;
	cin>>French;
	cout<<"Sci"<<endl;
	cin>>Sci;
	cout<<"CRE"<<endl;
	cin>>CRE;
	avg=(Maths+Eng+French+Sci+CRE)/5;
	if (avg>=70&&avg<=100)
	{cout<<"\n avg is"<<avg<<endl;
	cout<<"your grade is A"<<endl;
	}
	 else if(avg>=60&&avg<=69)
	{cout<<"\n avg"<<avg<<endl;
	cout<<"your grade is B"<<endl;
	}
	else if(avg>=50&&avg<=59)
	{cout<<"\avg"<<avg<<endl;
	cout<<"your grade is C"<<endl;
	}
	else if(avg>=40&&avg<=49)
	{cout<<"avg"<<avg<<endl;
	}
	else if (avg<40)
	{cout<<"\n avg"<<avg<<endl;
	cout<<"Fail";
	}
	return 0;
}