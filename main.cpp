#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    double e = 1e-6; // чем больше точность, тем больше число итераций
    double sum = 0;
    double si;
    int k = 0;
    int sign = 1;
    do
    {
        k++;
        si = 1. / k;
        sum += sign*si;
        sign *= -1;
    } while (si >= e);
    cout<<"Sum = "<<sum<<endl;
    cout<<"k = "<<k<<endl;
    return 0;
}
