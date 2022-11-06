// Program to calculate the product of three integers
#include <iostream>
using namespace std;
// Create a class
class Addition
{
  
    public:
    // data members declaration
    int x,y,z;
    // create member function of addition class
    int product()
    {
        return (x*y*z);
        }
};

int main() {
    // Create object of addition class
  Addition addition1;
 // assign values to data members
  addition1.x=22;
  addition1.y=30;
  addition1.z=50;
  // calculate and display the product
  cout<<"the product of three intergers is:"<<addition1.product()<<endl;
    return 0;
}