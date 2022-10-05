// Program to prompt user to enter numbers and sum numbers
#include <iostream>
using namespace std;
int main()
{
int i,p,q,sum=0;
cout<<"Enter the starting point"<<endl;
cin>>p;
cout<<"Enter the ending point"<<endl;
cin>>q;
for (i=p;i<=q;i++)
{
    cout<<i<<endl;
sum=sum+p;
}
cout<<"The sum of"<< p <<" and "<< q <<" is =" <<sum;
return 0;
}