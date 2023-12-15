#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return sin(x)+sin((100/3)*x);
}

namespace y_min
    {
        double var=1.1e11;
    }

namespace delta_x
    {
        double var;
    }

int main()
{
    double y;
    double x=2.7;

    cout<<"Podaj krok: ";
    cin>>delta_x::var;

    while(x<7.5)
    {
        y=f(x);
        if(y_min::var>y) y_min::var=y;
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"y_min="<<y_min::var<<endl<<endl;
        x+=delta_x::var;
    }

    return 0;
}
