//Name: Siddhant Bedre
//PRN: 23070123037
//AIM - To check which of the number is the greatest among 3.

#include <iostream>
using namespace std;

int main() { 
  int a,b,c;
  
  cout << "Enter number 1: ";
  cin >> a;
  cout << "Enter number 2: ";
  cin >> b;
  cout << "Enter number 3: ";
  cin >> c;
if (a>b)
{ if (a>c)
    { cout << a << " is the largest number.";}
else
{cout << c << " is the largest number.";}
    
}
else
{ if (b>c)
    { cout << b << " is the largest number.";}
    else
    {cout << c << " is the largest number.";}
}
    
    return 0;
}

/* output-
Enter number 1: 11
Enter number 2: 25
Enter number 3: 8
25 is the largest number.*/
