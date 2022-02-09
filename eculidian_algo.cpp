#include <iostream>
using namespace std;

int main()
{
    int a,b,q;
    cout << " enter num 1 "<< endl;
    cin>> a;
    cout << " enter num 1 "<< endl;
    cin>> b;
    int r1, r2,r;
    r1 = a;
    r2 = b;
    while (r2>0)
    {
        q = r1/r2;
        r = r1 - (q*r2);
        r1= r2;
        r2 = r;
        cout << r1 << " " << r2 << " " << endl;
    } 
    cout <<"the gcd("<<a<<","<<b<<")"<< " = " << r1 << endl;

    
    
} 


