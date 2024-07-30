//Name - Siddhant Bedre
//PRN - 23070123037
//Aim - Checking the quadrants of coordinates
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "Enter Coordinates" << endl;
    cout << "Enter x(Xaxis): ";
    cin >> num1;
    cout << "Enter y(Yaxis): ";
    cin >> num2;
    if(num1>0 && num2>0)
    {cout <<"The point is in first quadrant";}
    else if(num1<0 && num2>0)
    {cout <<"The point is in second quadrant";}
    else if(num1<0 && num2<0)
    {cout <<"The point is in third quadrant";}
    else if(num1>0 && num2<0)
    {cout <<"The point is in fourth quadrant";}
    else if((num1==0 && num2!=0) ||(num1!=0 && num2==0))
    {cout <<"The point is on axis";}
    else
    {cout <<"The point is at origin";}
    return 0;
}
/* Output :
Enter Coordinates
Enter x(Xaxis): 7
Enter y(Yaxis): 7
The point is in first quadrant
*/
