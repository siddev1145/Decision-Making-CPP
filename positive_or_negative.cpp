//Name - Siddhant Bedre
//PRN - 23070123037
//Aim - Checking whether a number is positive or negative

#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter number: ";
    cin >> num;
    if(num>0)
    {
        cout << "The num is POSITIVE(+ve)";
    }
    else
    { cout << "The num is NEGATIVE(-ve)";}

    return 0;
}

/* Output-
Enter number:8
The num is POSITIVE(+ve)
*/
