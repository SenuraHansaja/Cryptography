#include <iostream>
using namespace std;

int main() 
{
   int n,b,r1,r2,t1,t2,q,r,t;
    cout << "enter the Zn"<< endl;
    cin >> n;
    cout << "enter the number"<< endl;
    cin >> b;
    r1 = n;
    r2 = b;
    t1 = 0; 
    t2 = 1;

    while(r2>0)
    {
        q = r1/r2;
        r = r1 - q*r2;2
        r1 = r2; 
        r2 = r;

        t = t1 - q*t2;
        t1 = t2;
        t2 = t;

    }

    if (r1 == 1)
        if (t1 < 0)
            cout << "multiplicative inverse is "<< t1<<" or "<< t1+n;
        else
            cout << "multiplicative inverse is "<< t1 << endl;

    else 
    cout << "no multiplicative inverse " << endl;
}