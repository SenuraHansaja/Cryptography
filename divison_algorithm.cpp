#include <iostream>
using namespace std;

int main ()
{
    int a,q,n,r;
    cout << "enter the dividend"<< endl;
    cin >> a;
    cout << "enter the divisor"<< endl;
    cin >> n;
    
     q = a / n;
     r = a % n;
    cout << "a" << "   = " << " q" << "  x " << " n" <<  " + " << "r" << endl;
    cout << a << " =  " << q << " x " << n <<  " + " << r << endl;


    /// to maek r positive
    if (r < 0)
        {
            q  = q -1;// in hre we decrement value of q by 1 to make r positve 
            r = a - (q*n);
            cout << a << " = " << q << " x " << n <<  " + " << r << endl;

        }
}