// program  to check voter eligibility
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
     if(age>=18)
     {
    cout<<"you are eligible vote!"<<endl;
     }
    else
    {
    cout<<"you are not eligible";
    }
   return 0;
 }