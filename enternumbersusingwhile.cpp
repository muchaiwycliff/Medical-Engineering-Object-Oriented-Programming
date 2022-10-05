// Program to prompt user to enter numbers and sum numbers
#include <iostream>
using namespace std;
int main()
{
int p,q,sum=0;
cout<<"Enter the initial value p"<<endl;
cin>>p;
cout<<"Enter the final value q"<<endl;
cin>>q;
while (p<=q)
{
    sum+=p;
    p++;
}
cout<<"The sum of numbers from p and q is:"<<sum<<endl;
return 0;
}