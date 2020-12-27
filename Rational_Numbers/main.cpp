#include <iostream>

using namespace std;

class Rational
{
private:
    int p;
    int q;
public:
    Rational(int p1=1, int q1=1)
    {
        p=p1;
        q=q1;
    }

    friend Rational operator+(Rational, Rational);
    friend ostream &operator<<(ostream &, Rational &);
};
Rational operator+(Rational r1, Rational r2)
{
    Rational r3;
    r3.p=(r1.p*r2.q)+(r2.p*r1.q);
    r3.q=r1.q*r2.q;
    return r3;
}
ostream &operator<<(ostream &out, Rational &rat)
{
    out<<rat.p<<"/"<<rat.q<<endl;
    return out;
}
int main()
{
    Rational rati(3,4);
    Rational ra(4,5);
    Rational ration;
    ration=rati+ra;
    //cout<<ration<<endl;
    operator<<(cout,ration);
    return 0;
}
