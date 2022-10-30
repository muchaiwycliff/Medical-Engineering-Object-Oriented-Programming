//Program to Store values entered by user in 3D array and display it
#include <iostream>
using namespace std;
int main() {
//variable declaration
int i,j,k;
// This array can store upto 18 elements (2x3x3)
    int a[2][3][3]={ {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},{{10, 11,12},{13, 14, 15}, {16, 17, 18}} };
// use of nested for loop
// access matrix of the array
    for(i=0;i<2;i++)
    {
// access rows of the array
        for(j=0;j<3;j++)
    {
// access columns of the array
        for(k=0;k<3;k++)
        {
// Printing array elements with their proper indexes
   cout << "a[" << i << "][" << j << "][" << k << "] = " <<a[i][j][k]<< endl; 
        }
    }
    }
    
    return 0;
}