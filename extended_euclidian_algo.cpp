#include <iostream>
using namespace std;

int main()
{
    int a,b,q,s1,s2,t1,t2,r1,r2,r,s,t;
    cout << " enter num 1 "<< endl;
    cin>> a;
    cout << " enter num 2 "<< endl;
    cin>> b;

    r1 = a;
    r2 = b;
    s1 = 1;
    s2 = 0;
    t1 = 0;
    t2 = 1;
    cout << "r1" << "  "<< "r2" << " " << "s1" << " "<< "s2" << " " << "t1" << " " << "t2" <<endl;
while (r2>0)
    {
        q = r1/r2;
        r =r1 - (q*r2);
        r1 = r2;
        r2 = r;

        s = s1 -(q*s2);
        s1 = s2;
        s2 = s;

        t = t1 - (q*t2);
        t1 = t2;
        t2 = t;
        cout << r1 << "  "<< r2 << "  " << s1 << " "<< s2 << " " << t1 << "  " << t2 <<endl;
    }

  cout << "r1 = "<< r1 << " "<< "s1 = "<< s1 << " " << "t1 = "<< t1 <<endl;
}
