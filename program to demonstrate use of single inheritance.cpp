//  Program to demonstrate single inheritance
#include <iostream>
using namespace std;
//base class
class Father{
    public:
    void mansion()
    {
        cout<<"My mansion"<<endl;
    }
};
//derived class
class Son:public Father
{
    public:
    void motorbike()
    {
    cout<<"My motorbike"<<endl;
}
};
int main()
{
    //creates object of the son class
    Son son1;
    //calling members of the base class
    son1.mansion();
    //calling member of the derive class
    son1.motorbike();
    return 0;
}